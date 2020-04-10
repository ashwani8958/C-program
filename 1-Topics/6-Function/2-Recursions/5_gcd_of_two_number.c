/*
Demo code for finding gcd of two number recursivly
*/

#include <stdio.h>
int gcd(int num1, int num2);
int main()
{
	//Declare variable
	int num1;
	int num2;
	int result;

	//Prompt the user to enter the number to find its factorial
	printf("Enter the 1st number: ");

	//Read the number
	scanf("%d", &num1);
	
	//Prompt the user to enter the power
	printf("Enter the 2nd number: ");

	//Read the power
	scanf("%d", &num2);
	
	//Function call
	//Store the result in another variable
	result = gcd(num1, num2);
	
	//Print the result
	printf("GCD of %d and %d is %d\n",num1, num2, result);

	return 0;
}

//Define gcd Function
int gcd(int num1, int num2)
{
	//Recurive Case
	if (num2 != 0 )
	{
		return gcd( num2, num1 % num2);
	}
	
	//Base Case(termination)
	return num1;
}
