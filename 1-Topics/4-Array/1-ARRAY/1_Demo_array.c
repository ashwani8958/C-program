/*
Demo code to understand the arrays
*/

#include <stdio.h>
int main()
{
	//Declare variables
	int i;
	int a[4];

	//Loop to read the value of each element
	for (i = 0; i < 4; i++)
	{
		printf("Enter the %d element of array: ", i);

		scanf("%d", &a[i]);

	}
	
	//Loop to print the array
	for (i = 0; i < 4; i++)
	{
		printf("a[%d] : %d\n", i, a[i]);
	}

	return 0;
}
