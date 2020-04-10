/*
Demo code for finding the sum of the digits number recursivly
*/

#include <stdio.h>
int find_pow(int num, int power);
int main()
{
	//Declare variable
	int num;
	int power;
	int result;

	//Prompt the user to enter the number to find its factorial
	printf("Enter the number: ");

	//Read the number
	scanf("%d", &num);
	
	//Prompt the user to enter the power
	printf("Enter the power: ");

	//Read the power
	scanf("%d", &power);

	//Store the result in another variable
	result = find_pow(num, power);
	
	//Print the result
	printf("%d to the %d is %d\n",power, num, result);

	return 0;
}

//Define fact Function
int find_pow(int num, int power)
{
	//Base Case(termination)
	if (power == 0 )
	{
		return 1;
	}
	
	//Recurive Case
	return num * find_pow( num, power - 1 );
}
