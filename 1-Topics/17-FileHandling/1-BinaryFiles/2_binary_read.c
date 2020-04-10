#define _GNU_SOURCE  
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count;
	void *ch;
	FILE *fs, *fd;

	//open the file in read mode
	fs = fopen("sum.exe", "rb");
	fd = fopen("duplicate","wb");

	//handle error
	if(fs == NULL)
	{
		perror("sum.exe");
		exit(1);
	}

	//handle error
	if(fd == NULL)
	{
		perror("duplicate");
		exit(2);
	}

	//process byte by byte
	while( (count = fread(&ch, 1, 1, fs)) > 0)
	{
		fwrite(&ch, 1, 1, fd);
	}

	//close the file
	fclose(fs);
	fclose(fd);

	return 0;
}
