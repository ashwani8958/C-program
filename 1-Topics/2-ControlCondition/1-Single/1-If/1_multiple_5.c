/*
Demo code to check whether the given number is multiple of 5 or not
*/

#include <stdio.h>

int main()
{
	//Declaration of varibles
	int num;

	//Prompt the user to enter the number
	printf("Enter the Number to check multiple of 5: ");

	//Read the number
	scanf("%d", &num);

	//Check whether the number is multiple of 5 or not
	if (num % 5 == 0)
	{
		printf("%d: Is multiple of 5\n", num);
	}
	else
	{
		printf("%d: Is not multiple of 5\n", num);
	}

	return 0;
}
