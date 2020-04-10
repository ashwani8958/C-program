/*

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;

	//double pointer variable is needed to store the address return by malloc function
	//sizeof(int *) will give the memory required to store integer
	//sizeof(char *) for character
	int **p = malloc(3 * sizeof(int *));
	
	//print the address each row
	for(i = 0; i < 3; i++)
	{
		printf(" value @ address %p: %p\n", p+i, *p + i);
	}

	printf("\n\n");
	
	//dynamic allocate the col
	for(i = 0; i < 3; i++)
	{
		*(p + i) = malloc( 3 * sizeof(int));
		printf(" value @ address %p: %p\n", p+i, *(p + i));/* *p + i */
	}

	printf("\n\n");

	//populate and print the 1st column array
	for(i = 0; i < 3; i++)
	{
		*(p[0] + i ) = 10 * (i + 1);
		printf("value @ address %p: %d\n", p[0] + i, *(p[0] + i));
	}

	printf("\n\n");

	//populate and print the 2nd column array
	for(i = 0; i < 3; i++)
	{
		*(p[1] + i ) = 11 + (i * 1);
		printf("value @ address %p: %d\n", p[1] + i, *(p[1] + i));
	}

	printf("\n\n");

	//populate and print the 3rd column array
	for(i = 0; i < 3; i++)
	{
		//add 1st and 2nd col and store the result in 3rd col
		*(p[2] + i ) = *(p[0] + i) + *(p[1] + i);

		printf("value @ address %p: %d\n", p[2] + i, *(p[2] + i));
	}

	printf("\n\n");

	return 0;
}
