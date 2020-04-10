/*
Assignment code to check ENDIANNESS

*/

#include <stdio.h>

//Declare an union
typedef union
{
	int a;
	char b;
}endianess_t;

int main()
{
	//Declare variable of endianness_t type
	endianess_t x;

	//Initial the variable
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
