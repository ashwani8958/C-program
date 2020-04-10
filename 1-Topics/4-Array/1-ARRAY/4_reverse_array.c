/*
Demo code to reverse the array.
*/

#include <stdio.h>
int main()
{
	//Declare variables
	int i, j;
	int temp;
	int size;

	//prompt the user to enter the size 
	printf("Enter the size of array: ");

	//read the size of array
	scanf("%d", &size);

	//Declaration of array
	int a[size];

	//Loop to read the value of each element
	for (i = 0; i < size; i++)
	{
		printf("Enter the %d element of array: ", i);

		scanf("%d", &a[i]);

	}

	//Loop to print array
	printf("Array is:\n");
	for (i = 0; i < size; i++)
	{
		printf("%d\t", a[i]);
	}

	//Loop to print reverse array
	i = 0;
	j = size - 1;
	for ( ; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	printf("\nReverse of input Array \n");
	for ( i = 0; i < size; i++)
	{
		printf("%d\t", a[i]);
	}

	printf("\n");

	return 0;
}
