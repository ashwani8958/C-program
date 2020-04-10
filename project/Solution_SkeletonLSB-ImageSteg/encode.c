#include "main.h"

Status encode_one_byte(unsigned char ch, EncodeInfo encInfo)
{
	char buffer[10];
	int i;
	fread(buffer, 8, 1, encInfo.fptr_src_image);

/*my life my rules
	char single_bit;
	for(i = 0; i < 8; i++ )
	{
		single_bit = ch ^ (ch & ( ~(1) << i));
		if(single_bit == 1)
		{
			buffer[i] = buffer[i] | single_bit;
		}
		else
		{
			buffer[i] = buffer[i] & single_bit;
		}
	}
*/
	for(i = 0; i < 8; i++)
	{
		if(ch & (1 << i))
		{
			buffer[i] = buffer[i] | 0x01;
		}
		else
		{
			buffer[i] = buffer[i] & ~(0x01);
		}
	}

	fwrite(buffer, 8, 1, encInfo.fptr_stego_image);
}

//Encode Password
Status pass_encode( EncodeInfo encInfo, char *argv[])
{
	char buffer[32];
	int i,j,k;
	char *password = argv[5];
	fread(buffer, 32, 1, encInfo.fptr_src_image);

	for(j = 0; j < 4; )
	{
		for(i = 0; i < 32; )
		{
			for(k = 0; k < 8; k++)
			{
				if( password[j] & ( 1 << k))
				{
					buffer[i] = buffer[i] | 0x01;
				}
				else
				{
					buffer[i] = buffer[i] & ~(0x01);
				}
				i++;
			}
			j++;
		}
	}
	fwrite(buffer, 32, 1, encInfo.fptr_stego_image);
}

//Encode Extension
Status encode_extension(EncodeInfo encInfo, char *argv[])
{
	char *extension;
	extension = strchr(argv[2], '.');
	extension = extension + 1;

	char buffer[24];
	short int i,j,k;
	fread(buffer, 24, 1, encInfo.fptr_src_image);
	for(j = 0; j < 3; )
	{
		for(i = 0; i < 24; )
		{
			for(k = 0; k < 8; k++)
			{
				if(extension[j] & (1 << k))
				{
					buffer[i] = buffer[i] | 0x01;
				}
				else
				{
					buffer[i] = buffer[i] & ~(0x01);
				}
			i++;	
			}
		j++;	
		}
	}
	
	fwrite(buffer, 24, 1, encInfo.fptr_stego_image);
}

void encode_secret_file(EncodeInfo encInfo, short int size)
{
	int i;
	unsigned char ch;
	for(i = 0; i < size; i++)
	{
		fread(&ch, 1, 1, encInfo.fptr_secret);
		//printf("%c", ch);

		encode_one_byte(ch, encInfo);
	}
}
