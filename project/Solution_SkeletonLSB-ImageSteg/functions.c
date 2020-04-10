#include "main.h"

//validate CML function
OperationType read_and_validate_cmdline_args(char *argv[], EncodeInfo *encInfo)
{

	if ( strcmp(argv[1], "-e") &&  strcmp(argv[1], "-d"))
	{
		return e_unsupported;
	}

	if (strcmp(argv[1], "-e") == 0)
	{
		//If number of argument is less than six
		if(argv[5] == NULL)
		{
			return e_unsupported;
		}
		else 
		{
			encInfo->secret_fname = argv[2];
			encInfo->src_image_fname = argv[3];
			encInfo->stego_image_fname = argv[4];

			return e_encode;
		}
	}

	if (strcmp(argv[1], "-d") == 0)
	{
		if( argv[5] != NULL)
		{
			return e_unsupported;
		}
		else
		{
			encInfo->stego_image_fname = argv[2];
			encInfo->secret_fname = argv[3];
			return e_decode;
		}
	}
}

//Open file function
Status open_files(EncodeInfo *encInfo, OperationType result)
{
	if( result == e_encode)
	{
		// Src Image file
		encInfo->fptr_src_image = fopen(encInfo->src_image_fname, "r");
		//Do Error handling
		if (encInfo->fptr_src_image == NULL)
		{
			perror("fopen");
			fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->src_image_fname);
			return e_failure;
		}

		// Secret file
		encInfo->fptr_secret = fopen(encInfo->secret_fname, "r");

		//Do Error handling
		if (encInfo->fptr_secret == NULL)
		{
			perror("fopen");
			fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->secret_fname);
			return e_failure;
		}

		// Stego Image file
		encInfo->fptr_stego_image = fopen(encInfo->stego_image_fname, "w");
		//Do Error handling
		if (encInfo->fptr_stego_image == NULL)
		{
			perror("fopen");
			fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->stego_image_fname);
			return e_failure;
		}

		// No failure return e_success
		return e_success;
	}

	if (result == e_decode)
	{
		/*
		// Secret file
		encInfo->fptr_secret = fopen(encInfo->secret_fname, "w");
		//Do Error handling
		if (encInfo->fptr_secret == NULL)
		{
			perror("fopen");
			fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->secret_fname);
			return e_failure;
		}
		*/

		// Stego Image file
		encInfo->fptr_stego_image = fopen(encInfo->stego_image_fname, "r");
		//Do Error handling
		if (encInfo->fptr_stego_image == NULL)
		{
			perror("fopen");
			fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->stego_image_fname);
			return e_failure;
		}

		// No failure return e_success
		return e_success;

	}

}
/* Get image size */
uint64 get_image_size_for_bmp(FILE *fptr_image)
{
	uint width, height;
	// Seek to 18th byte
	fseek(fptr_image, 18, SEEK_SET);

	// Read the width (an int)
	fread(&width, sizeof(int), 1, fptr_image);
	//printf("width = %u\n", width);

	// Read the height (an int)
	fread(&height, sizeof(int), 1, fptr_image);
	//printf("height = %u\n", height);
	
	//printf("%u\n", (width * height * 3));
	// Return image capacity
	return width * height * 3; //TODO use bpp
}
     
/* Get file size */
uint get_file_size(FILE *fptr)
{
	fseek(fptr, 0, SEEK_END);
	long int source_file_size;
	source_file_size = ftell(fptr);
	rewind(fptr);

	//printf("%ld\n", source_file_size);
	return source_file_size;

}
//Find the size
Status check_capacity(EncodeInfo *encInfo)
{
	if (get_file_size(encInfo->fptr_secret) <
	get_image_size_for_bmp(encInfo->fptr_src_image))
	{
		return e_success;
	}

	else
	{
		return e_failure;
	}
}

/* Copy bmp image header */
Status copy_bmp_header(FILE *fptr_src_image, FILE *fptr_dest_image)
{
	char buffer[60];
	fseek(fptr_src_image, 0, SEEK_SET);
	fread(buffer, 54, 1, fptr_src_image);
	fwrite(buffer, 54, 1, fptr_dest_image);
	//printf("source: %ld\n", ftell(fptr_src_image));
	//printf("distin: %ld\n", ftell(fptr_dest_image));
}


Status copy_remaining_img_data(FILE *fptr_src_image, FILE *fptr_stego_image)
{
	char buffer[2];

	while( fread(buffer, 1, 1, fptr_src_image))
	{

	fwrite(buffer, 1, 1, fptr_stego_image);

	}
}



