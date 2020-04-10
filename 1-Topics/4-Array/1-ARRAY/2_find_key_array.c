/*
Demo code to understand the arrays
*/

#include <stdio.h>
int main()
{
	//Declare variables
	int i;
	int a[4];
	int key;
	int flag = 0;

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
	
	//prompt the user to enter the element that has to be searched in array
	printf("Enter the element you want to find in array: ");
	
	//Read the value of element in the variable key
	scanf("%d", &key);
	
	//Loop to search the element in the array
	for (i = 0; i < 4; i++)
	{
		if (a[i] == key)
		{
			printf("%d is found at position %d in the array\n", key, i);
			flag = 1;
			break;
		}
	}

	//print element not found if it is not present in the array
	if (0 == flag)
	{
		printf("%d is not present in array\n", key);
	}

	return 0;
}
