/*
Assignment code to swap two variable by using pass by reference method
*/

#include <stdio.h>

//Function Declaration
void swap(int *var1, int *var2);

int main()
{
	//Declare variable
	int var1,var2;
	char choice;

	do
	{
		//Prompt the user to enter the value of 1st variable
		printf("Enter the value of 1st variable: ");

		//Read the value into var1 
		scanf("%d", &var1);

		//prompt the user to enter the value of 2nd varible
		printf("Enter the value of 2nd variable: ");

		//Read the value into var2
		scanf("%d", &var2);
		
		//Print the value of variables before swaping
		printf("\nBefore swaping\n");
		printf("Value of 1st variable: %d\tValue of 2nd variable: %d\n", var1, var2);
		
		//calling swap function 
		swap(&var1, &var2);

		//print the value of variable after swaping
		printf("\nAfter swaping\n");
		printf("Value of 1st variable: %d\tValue of 2nd variable: %d\n", var1, var2);

		//Prompt the user to continue or stop
		printf("\nDo you want to continue?\nPress Y/y(yes) or any other key to exit: ");

		//Read the user choice
		scanf(" %c", &choice);

	} while('Y' == choice || 'y' == choice);

	return 0;
}

//Function Definition
void swap(int *var1, int *var2)
{

	*var1 = *var1 + *var2;

	//swap Logic
	*var2 = *var1 - *var2;
	*var1 = *var1 - *var2;
}
