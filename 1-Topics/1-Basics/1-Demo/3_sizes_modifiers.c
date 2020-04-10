/*
Demo code to find sizeof of all modifiers with the Integral data types
*/

#include <stdio.h>

int main()
{
	//char
	printf("size of (char): %zu\n", sizeof(char));
	printf("size of (signed char): %zu\n", sizeof(signed char));
	printf("size of (unsigned char): %zu\n", sizeof(unsigned char));

	//int combined with size modifiers
	printf("\n");
	printf("int combined with size modifiers\n");	

	printf("size of (int): %zu\n", sizeof(int));
	printf("size of (short int): %zu\n", sizeof(short int));
	printf("size of (long int): %zu\n", sizeof(long int));
	printf("size of (long long int): %zu\n", sizeof(long long int));

	//int combined with sign modifiers
	printf("\n");
	printf("int combined with sign modifiers\n");	
	printf("size of (int): %zu\n", sizeof(int));
	printf("size of (signed int): %zu\n", sizeof(signed int));
	printf("size of (unsigned int): %zu\n", sizeof(unsigned int));

	//int combined with both size + sign modifiers
	printf("\n");
	printf("int combined with size + sign modifiers\n");	
	printf("size of (signed short int): %zu\n", sizeof(signed short int));
	printf("size of (unsigned short int): %zu\n", sizeof(unsigned short int));
	printf("size of (signed long int): %zu\n", sizeof(signed long int));
	printf("size of (unsigned long int): %zu\n", sizeof(unsigned long int));
	printf("size of (signed long long int): %zu\n", sizeof(signed long long int));
	printf("size of (unsigned long long int): %zu\n", sizeof(unsigned long long int));
	
	return 0;
}
