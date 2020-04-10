/*
Assignment code for file concatenation
*/

#define _GNU_SOURCE  
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Declare variable
	char ch;

	//Declare file type pointer
	FILE *fs, *fd;

	//Create the buffer 
	char buffer[80];

	//open the file in read mode
	fs = fopen("text.txt", "r");


	//handle error
	if(fs == NULL)
	{
		perror("text.txt");
		exit(1);
	}

	//open the file in write mode
	fd = fopen("text3.txt","w");

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
	
	//open another file in read mode
	fs = fopen("text1.txt", "r");

	//handle error
	if(fs == NULL)
	{
		perror("text1.txt");
		exit(1);
	}
	
	//Open same text3.txt file in append mode
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
