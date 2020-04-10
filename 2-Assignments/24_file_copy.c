/*
Assignment code to file
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Declare the variable
	char ch;

	//Declare the file pointer
	FILE *fs, *fd;

	//open the file in read mode
	fs = fopen("text.txt", "r");


	//handle error
	if(fs == NULL)
	{
		perror("text.txt");
		exit(1);
	}

	//open the file in write mode
	fd = fopen("dst.txt","w");

	//handle error
	if(fd == NULL)
	{
		perror("dst.txt");
		exit(2);
	}

	//process byte by byte
	while((ch = fgetc(fs)) != EOF)
	{
		fputc(ch, fd);
	}

	//close the file
	fclose(fs);
	fclose(fd);

	//to close all file pointer in single shot
	//fcloseall();
	return 0;
}
