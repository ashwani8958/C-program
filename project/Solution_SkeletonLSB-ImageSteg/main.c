#include "main.h"
int main(int argc, char *argv[])
{

	//Declare struture variable
	EncodeInfo encInfo;
	char magic[3];
	char decode_password[5], extension[4];
	int i;
	short size;
	OperationType result;
	Status stat;

	//
	if(argc < 5 || argc > 6)
	{
		printf("Usage for encode: ");
		printf("./stegno -e secret.file src_image_fname stego_image_fname password\n");
		printf("Usage for decode: ");
		printf("./stegno -d stego_image_fname secret_fname password\n");
		return -1;
	}

	else
	{

		//Read and validate args from argv 
		result = read_and_validate_cmdline_args(argv, &encInfo);
		
		if (result == e_unsupported)
		{
			printf("Usage for encode: ");
			printf("./stegno -e secret.file src_image_fname stego_image_fname password\n");
			printf("Usage for decode: ");
			printf("./stegno -d stego_image_fname secret_fname password\n");
			return -1;
		}
	}
	
	stat = open_files(&encInfo, result);
	
	if(stat == e_failure)
	{
		return e_failure;
	}
	
	
	if(result == e_encode)
	{
		//check capacity
		check_capacity(&encInfo);

		/* Copy bmp image header */
		copy_bmp_header(encInfo.fptr_src_image, encInfo.fptr_stego_image);
	
		//encode magic string
		encode_one_byte('#', encInfo);
		encode_one_byte('*', encInfo);


		//encode password
		pass_encode(encInfo, argv);

		//encode extension
		encode_extension(encInfo, argv);
		
		//Get the size of secrect file
		size = get_file_size(encInfo.fptr_secret);

	//	printf("%d\n", size);
		
		char *cptr = (char *)&size;
		encode_one_byte(*cptr, encInfo);
		cptr++;
		encode_one_byte(*cptr, encInfo);

		encode_secret_file(encInfo, size);

		//copy remaining data
		copy_remaining_img_data(encInfo.fptr_src_image, encInfo.fptr_stego_image);

	}

	else
	{
		fseek(encInfo.fptr_stego_image, 54L, SEEK_SET);

		magic[0] = decode_one_byte(encInfo);
		magic[1] = decode_one_byte(encInfo);
		magic[2] = '\0';
		//printf("%s\n", magic);

		if( !strcmp(magic, "#*"))
		{
			for(i = 0; i < 4; i++)
			{
				decode_password[i] = pass_decode(encInfo);
			}
			decode_password[4] = '\0';
			//printf("decoded password: %s\n", decode_password);

			if(!strcmp(argv[4], decode_password))
			{
				for(i = 0; i < 3; i++)
				{
					extension[i] = decode_extension(encInfo);
				}
				extension[3] = '\0';
				//printf("extension: %s\n", extension);
				
				size = decode_size(encInfo);
				//printf("%d\n", size);

				decode_secret_file(encInfo, size, extension);

			}
			else
			{
				printf("Password didn't matched\n");
				printf("decoded password: %s\n", decode_password);
				return e_failure;
			}
		}
		else
		{
			return e_failure;
		}

	}

	return 0;
}

