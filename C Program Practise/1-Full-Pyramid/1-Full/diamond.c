/*
Demo code to print the diamond
*/

#include <stdio.h>
int main()
{
	//Declaration of variables
	int row,i,j;

	//prompt the user to enter the number of rows in the diamond
	printf("Enter the number of rows: ");

	//Read the number of rows
	scanf("%d", &row);

	//print the upper part of diamond
	for(i=1;i<=row;i++)
	{
		//loop to print spaces
		for(j=1;j<=row-i;j++)
		{
			printf(" ");
		}

		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	//print the lower part of diamond
	for(i=1;i<=row-1;i++)
	{
		//loop to print the spaces
		for(j=1;j<=i;j++)
		{
		printf(" ");
		}

		for(j=1;j<=row-i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
