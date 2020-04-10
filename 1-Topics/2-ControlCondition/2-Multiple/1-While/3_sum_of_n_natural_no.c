/*
Demo Code for sum of N natural number
*/

#include <stdio.h>
int main()
{
	//Declaration of variable
	int num,sum = 0;
	int orginal_num;

	//Prompt the user to enter the number
	printf("Enter the number: ");

	//Read the number
	scanf("%d", &num);
	
	//Storing the number into another variable to print it later
	orginal_num = num;

	//Sum the N natural number
	while (num)
	{
		sum = sum + num;
		num--;
	}
	printf("Sum of first %d number is %d\n", orginal_num,sum);

	return 0;
}
