#include <stdio.h>
typedef union
{
	int a;
	char b;
}endianess_t;

int main()
{
	endianess_t x;
	x.a = 0x1a2b3c4d;
	if(x.b == 0x4d)
	{
		printf("Little endian\n");
	}

	else
	{
		printf("Big endian\n");
	}

	return 0;
}
