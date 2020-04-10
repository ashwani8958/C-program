/*
Demo code to find maximum of three number using ternery operator
*/

#include <stdio.h>
int main()
{
	//Delcare variable
	int num1, num2, num3, max;
	char choice;
	
	do
	{
		//prompt the user to enter 1st num
		puts("Enter the 1st number:");

		//read the 1st num
		scanf("%d", &num1);

		//prompt the user to enter 2nd num
		puts("Enter the 2nd number:");

		//read the 2nd num
		scanf("%d", &num2);

		//prompt the user to enter 3rd num
		puts("Enter the 3rd number:");

		//read the 3rd number
		scanf("%d", &num3);

		//check for largest number among three
		max = num1 > num2 ? (num1 > num3 ? num1 : num2 ) : (num2 > num3 ? num2 : num3);

		//print the maximum of three number
		printf("Biggest number among %d, %d and %d is %d\n", num1, num2, num3, max);

		//prompt user to continue or not
		puts("Do you want to continue?\nPress y/Y(yes) or any other key to exit: ");

		//read the choice
		scanf(" %c", &choice);
	} while ( 'Y' == choice || 'y' == choice);
	return 0;
}
