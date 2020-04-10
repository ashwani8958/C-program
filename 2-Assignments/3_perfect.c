/*
Assignment code to find perfect number
*/

#include <stdio.h>
#include <math.h>
int main()
{
	//Declaration of variable
	int num, fact, fact2;
	char choice;

	//Declaration of loop variable
	int i;

	do
	{
		//Delclaration of variable to sum the factors of number
		int sum = 1;

		//Prompt the user to enter the number
		printf("Enter the number: ");

		//Read the number
		scanf("%d", &num);
		
		//check for positive number
		if (num >= 1)
		{
			if(num <= 1048576)
			{
				for (i = 2; i < sqrt(num); i++)
				{
					if ( num % i == 0)
					{
						fact = num / i;
						fact2 = num / fact;
						sum = sum + fact +fact2;
					}
				}

				//checking of perfect number
				if (num == sum)
				{
					printf("%d is a perfect number\n", num);

				}
				else
				{
					printf("%d is not a perfect number\n", num);
				}
			}
			else
			{
				printf("%d is out of range.Enter smaller number\n", num);
			}
		}
		
		//check for negative number
		else
		{
			printf("Invalid Input. Enter positive number only\n");
		}

		//prompt user to continue the loop for another time
		printf("Do you want to continue?\nPress Y/y(yes) or N/n(no): ");

		//read the choice from user 
		scanf(" %c", &choice);
	}while ( choice == 'Y' || choice == 'y');

	return 0;

}
