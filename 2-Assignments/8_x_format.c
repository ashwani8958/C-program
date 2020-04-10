/*
Assignment code to print x pattern
*/

#include <stdio.h>
int main()
{
	//declare variables
	int i,j,num;
	char option;
	do
	{

	//Enter the number
	printf("Enter the number of rows: ");

	//read number
	scanf("%d", &num);

	//print x pattern
	if( num <= 32)
	{
		//check if num is odd
		if (num % 2 != 0)
		{
			for (i = 1; i <= num; i++)
			{
				for (j = 1; j <= num; j++)
				{
					if (i == j && j == (num -i + 1))
					{
						printf("Hello world Hello World");
					}
					else if (i == j || j == (num - i + 1))
					{
						printf("Hello World ");
					}
					else
					{
						printf(" ");
					}

				}
				printf("\n");
			}
		}

		//check if num is even
		else
		{
			for (i = 1; i <= num; i++)
			{   
				for (j = 1; j <= num; j++)
				{
					if (i == j || i + j == num + 1)
					{
						printf("Hello world ");
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			} 
		}
	}
	else
	{
		printf("Enter number of rows less than 32\n");
	}

	//prompt the user to enter the choice
	printf("want to continue ?\nPress Y/y(Yes) or N/n(No): ");

	//Read the choice
	scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');

		return 0;
}
