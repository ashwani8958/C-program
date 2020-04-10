#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	FILE *fs, *fd;
	char buffer[80];

	//open the file in read mode
	fs = fopen("text.txt", "r");
	fd = fopen("dst.txt","w");

	//handle error
	if(fs == NULL)
	{
		perror("text.txt");
		exit(1);
	}

	//handle error
	if(fd == NULL)
	{
		perror("dst.txt");
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

	//to close all file pointer in single shot
	//fcloseall();
	return 0;
}
