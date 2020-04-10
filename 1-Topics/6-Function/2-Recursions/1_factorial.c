/*
Demo code for finding factorial of number recursivly
*/

#include <stdio.h>
int fact(int n);
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
	result = fact(n);
	
	//Print the result
	printf("Factorial of %d is %d\n", n, result);

	return 0;
}

//Define fact Function
int fact(int n)
{
	//Base Case(termination)
	if (n == 0 || n == 1)
	{
		return 1;
	}
	
	//Recurive Case
	return n * fact(n - 1);
}
