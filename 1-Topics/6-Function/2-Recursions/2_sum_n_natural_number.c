/*
Demo code for finding the sum of N number recursivly
*/

#include <stdio.h>
int sum(int n);
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
	result = sum(n);
	
	//Print the result
	printf("Sum of %d natural number is %d\n", n, result);

	return 0;
}

//Define fact Function
int sum(int n)
{
	//Base Case(termination)
	if (n == 0 )
	{
		return 0;
	}
	
	//Recurive Case
	return n + sum(n - 1);
}
