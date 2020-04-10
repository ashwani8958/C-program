#define _GNU_SOURCE  
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	FILE *fs, *fd;
	char buffer[80];

	//open the file in read mode
	fs = fopen("text.txt", "r");
	fd = fopen("text3.txt","w");

	//handle error
	if(fs == NULL)
	{
		perror("text.txt");
		exit(1);
	}

	//handle error
	if(fd == NULL)
	{
		perror("text3");
		exit(2);
	}

	//process byte by byte
	while(fgets(buffer, 80, fs) != NULL)
	{
		fputs(buffer, fd);
	}

	//close the file
	fclose(fs);
	fclose(fd);

	fs = fopen("text1.txt", "r");

	//handle error
	if(fs == NULL)
	{
		perror("text1.txt");
		exit(1);
	}
	
	fd = fopen("text3.txt","a");

	//handle error
	if(fd == NULL)
	{
		perror("text3");
		exit(2);
	}

	while(fgets(buffer, 80,fs) != NULL)
	{
		fputs(buffer, fd);
	}

	//to close all file pointer in single shot
	fcloseall();

	//fclose(fs);
	//fclose(fd);
	return 0;
}
