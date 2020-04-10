#include "main.h"

char decode_one_byte(EncodeInfo encInfo)
{

	int i = 0;
	char buffer[10], ch  = 0;
	fread(buffer, 8, 1, encInfo.fptr_stego_image);

	for(i = 0; i < 8; i++)
	{
		if(buffer[i] & 0x01)
		{
			ch = ch | (1 << i);
		}
	}
	
	return ch;
}



//Decode password
char pass_decode(EncodeInfo encInfo)
{
	char password = 0;
	int i;
	char buffer [8];
	fread(buffer, 8, 1, encInfo.fptr_stego_image);

	for( i = 0; i < 8; i++)
	{
		if(buffer[i] & 0x01)
		{
			password = password | ( 1 << i);
		}
	}
	return password;
}



//Decode Extension
char decode_extension(EncodeInfo encInfo)
{
	char extension = 0, buffer[8];
	int i;
	fread(buffer, 8, 1, encInfo.fptr_stego_image);

	for(i = 0; i < 8; i++)
	{
		if(buffer[i] & 0x01)
		{
			extension = extension | ( 1 << i);
		}
	}

	return extension;
}

short decode_size(EncodeInfo encInfo)
{

	int i = 0;
	char buffer[16]; short size  = 0;
	fread(buffer, 16, 1, encInfo.fptr_stego_image);

	for(i = 0; i < 16; i++)
	{
		if(buffer[i] & 0x01)
		{
			size = size | (1 << i);
		}
	}
	
	return size;
}



Status decode_secret_file(EncodeInfo encInfo, short int size, char *extension)
{
	char decode_file[20];
	strcpy(decode_file, encInfo.secret_fname);
	strcat(decode_file,".");
	strcat(decode_file, extension);
	strcpy(encInfo.secret_fname, decode_file);
	
	//open decode file
	encInfo.fptr_secret = fopen(encInfo.secret_fname, "w");

	//do Error handling
	if(encInfo.fptr_secret == NULL)
	{
		perror("fopen");
		fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo.secret_fname);
		return e_failure;
	}
	
	//printf("%s\n", encInfo.secret_fname);
	int j, max = size * 8;
	char buffer_stego[8], buffer_secret[1] = "a";
	char ch = 0;
	for(j = 0; j < size; j++ )
	{
		ch = decode_one_byte(encInfo);
		fwrite(&ch, 1, 1, encInfo.fptr_secret);
	}

}
