#include <stdio.h>

int main(void)
{
	int height = 0, width = 0;

	FILE *fp = fopen("linux.bmp", "r");

	fseek(fp, 0x12, SEEK_SET);

	fread(&width, 4, 1, fp);

	printf("Width of image is : %d\n", width);



	fclose(fp);
}

