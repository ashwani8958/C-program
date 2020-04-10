/*
Demo Code to sum of digits of the given number
*/

#include <stdio.h>
int main()
{
	//Declaration of variable
	int num, rem,sum = 0, orginal_num;

	//Prompt the user to enter the number
	printf("Enter the number: ");

	//Read the number
	scanf("%d", &num);

	//store the enter number into another variable for printing
	orginal_num = num;

	//Reverse the number
	while (num)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	printf("sum of digit of %d is: %d\n", orginal_num,sum);

	return 0;
}
