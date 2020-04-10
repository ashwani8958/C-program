/*
Demo code to check whether the given number is  divisible by other two number or not
*/

#include <stdio.h>
int main()
{
	//Declaration of variables
	int num1,num2,num3;

	//prompt user to enter the number to check its divisibility
	printf("Enter the number to check its divisibility with  other two number: ");

	//Read num1
	scanf("%d", &num1);

	//prompt user to enter num2
	printf("Enter the 1st number: ");

	//Read num2
	scanf("%d", &num2);

	//print user to enter num3
	printf("Enter the 2nd number: ");

	//Read num3
	scanf("%d", &num3);

	//Check whether the given number is  divisible by other two number or not
	if ( num1 % num2 == 0)
	{
		if ( num1 % num3 == 0)
		{
			printf("%d is divisible by both %d and %d\n", num1,num2,num3);
		}
		else
		{
			printf("%d is divisible by %d but not divisible by %d\n", num1,num2,num3);
		}
	}
	else
	{
		printf("%d is not divisible by %d\n", num1,num2);
	}

	return 0;
}
