/*
Demo code for finding the sum of the digits number recursivly
*/

#include <stdio.h>
int sum_digit(int n);
int main()
{
	//Declare variable
	int n;
	int result;

	//Prompt the user to enter the number to find its factorial
	printf("Enter the number: ");

	//Read the number
	scanf("%d", &n);
	
	//Store the result in another variable
	result = sum_digit(n);
	
	//Print the result
	printf("Sum of the digits of %d is %d\n", n, result);

	return 0;
}

//Define fact Function
int sum_digit(int n)
{
	//Base Case(termination)
	if (n == 0 )
	{
		return 0;
	}
	
	//Recurive Case
	return (n % 10) + sum_digit( n / 10);
}
