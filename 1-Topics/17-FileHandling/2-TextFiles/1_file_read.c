#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	FILE *fp;

	//open the file in read mode
	fp = fopen("text.txt", "r");

	//handle error
	if(fp == NULL)
	{
		perror("text.txt");
		exit(1);
	}

	//process byte by byte
	while((ch = fgetc(fp)) != EOF)
	{
		fputc(ch, stdout);
	}

	//close the file
	fclose(fp);
	return 0;
}
