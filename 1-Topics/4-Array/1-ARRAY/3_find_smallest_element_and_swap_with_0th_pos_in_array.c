/*
Demo code to find the smallest element in array and then swap it with 0th position.
*/

#include <stdio.h>
int main()
{
	//Declare variables
	int i;
	int flag = 0;
	int smallest; 
	int index;
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
	
	//initializing the smallest as the 1st element of array
	smallest = a[0];
	
	//Loop to search the element in the array
	for (i = 1; i < size; i++)
	{
		if (smallest > a[i])
		{
			smallest = a[i];
			index = i;
		}
	}

	//swap the smallest value with zero
	temp = a[0];
	a[0] = smallest;
	a[index] = temp;

	//Loop to print the array
	printf("\nArray with smallest element at first position\n");
	for (i = 0; i < size; i++)
	{
		printf("a[%d] : %d\n", i, a[i]);
	}

	return 0;
}
