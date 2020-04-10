/*
Demo code to check even and odd number
*/

#include <stdio.h>
int main()
{
	//Declaration of the variables
	int num;

	//prompt the user to enter the number
	printf("Enter the Number: ");

	//Read the number
	scanf("%d", &num);

	//check whether even or odd
	if (num % 2 == 0)
	{
		printf("%d: is a even number\n", num);
	}
	else
	{
		printf("%d: is a odd number\n", num);
	}

	return 0;
}
