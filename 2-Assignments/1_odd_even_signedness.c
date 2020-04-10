/*
Assignment code to find even odd or even number along its signedness
*/

#include <stdio.h>

int main()
{
	//Declaration of variables
	int num;
	char choice;

	//Checking the odd or even number along its signedness
	do
	{

		//Prompt the user to enter the number
		printf("Enter the number: ");

		//Read the number
		scanf("%d", &num);

		if (num < 0)
		{
			if (num % 2 == 0)
			{
				printf("%d is a negative even number\n", num);

			}
			else
			{
				printf("%d is a negative odd number\n", num);
			}
		}
		if (num > 0)
		{
			if(num % 2 == 0)
			{
				printf("%d is a postive even number\n", num);
			}
			else
			{
				printf("%d is a postive odd number\n", num);
			}
		}
		if (num == 0)
		{
			printf("%d is nither postive or negative\n", num);
		}

		//Ask user to continue another time or not
		printf("Do you want to continue?\nPress Y,y(Yes) or N,n(NO): ");

		//Read the choice of user
		scanf(" %c", &choice);

		//print blank line
		printf("\n");

	}while (choice == 'Y' || choice == 'y');

	return 0;
}
