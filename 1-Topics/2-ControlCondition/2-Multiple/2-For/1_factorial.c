/*
Demo code to find factorial of given number
*/

#include <stdio.h>
int main()
{
	//Declaration of variables
	int num;
	int fact = 1;
	int loop_count;

	//Prompt the user to enter the number
	printf("Enter the number: ");

	//Read the number
	scanf("%d", &num);

	if ( num == 0)
	{
		printf("Factorial of %d is %d\n", num,fact);
	}
	if (num > 0)
	{
		for (loop_count = 1; loop_count <= num; loop_count++)
			{
				fact = fact * loop_count;
			}
		printf("Factorial of %d is %d\n", num,fact);
	}
	else
	{
		printf("No factorial for negative number");
	}

	return 0;
}
