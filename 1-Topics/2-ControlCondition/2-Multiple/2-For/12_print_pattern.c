/*
Demo code to print the diamond
*/

#include <stdio.h>
int main()
{
	//Declaration of variables
	int row,i,j;
	int upper;
	int lower;

	//prompt the user to enter the number of rows in the diamond
	printf("Enter the number of rows: ");

	//Read the number of rows
	scanf("%d", &row);

	upper = (row + 1) / 2;
	lower = (row - 1) / 2;

	//print the upper part of diamond
	for(i = 1; i <= upper; i++)
	{
		//loop to print spaces
		for(j=1; j <= upper - i; j++)
		{
			printf(" ");
		}

		for(j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	//print the lower part of diamond
	for(i = 1; i <= lower; i++)
	{
		//loop to print the spaces
		for(j=1; j <= i; j++)
		{
		printf(" ");
		}

		for(j = 1; j <= lower + 1 - i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
