/*
Assignment - To calculate the which day of the week it is based on the starting day and the given 
		     number of days
*/

#include <stdio.h>

int main()
{
	//Declaration of Variables go here
	int number_of_days;
	int starting_day;
	int result;
	char option;

	do
	{
		//Prompt the user to enter the number corresponding to the starting day
		printf("Enter the number corresponding to the day from the list given below\n");
		printf("1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n");

		//Read the starting number based on the day from the list
		scanf("%d", &starting_day);

		if (starting_day >= 1 && starting_day <= 7)
		{
			//Prompt the user to enter the number of days he/she wants to calculate from the starting day
			printf("Please enter the number of days you want to calculate from the starting day ( 1 - 365\n");

			//Read the number 
			scanf("%d", &number_of_days);

			if (number_of_days >= 1 && number_of_days <= 365)
			{
				//Perform the operation using switch-case
				{
				result = (((starting_day + number_of_days) % 7 ) - 1);

				switch (result)
				{
					case 1: 
							printf("The day is Sunday\n");
							break;

					case 2:
							printf("The day is Monday\n");
							break;

					case 3:
							printf("The day is Tuesday\n");
							break;

					case 4:
							printf("The day is Wednesday\n");
							break;

					case 5:
							printf("The day is Thursday\n");
							break;

					case 6:
							printf("The day is Friday\n");
							break;

					case 0:
							printf("The day is Saturday\n");
							break;

					default:
							printf("Incorrect Choice Entered\n");
							break;
				}
				}
			}
			else
			{
				printf("Incorrect Input. Enter the number between 1-365\n");
			}
		}
		else
		{
			printf("Incorrect Input.Enter the option from 1 to 7\n");
		}
	       //Prompt the user whether he wants to continue the program or not
		   printf("Please press [Y/y] to continue or any other key to exit\n");

			//Read the option entered by the user
			scanf("\n%c", &option);

	}	while (option == 'Y' || option == 'y');
	
	return 0;
}
