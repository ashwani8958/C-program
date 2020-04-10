/*
Assignment code to print all the possible combinations of entered characters
*/

#include<stdio.h>
#include<string.h>
#define N 10

//Function Prototype and definiation
void print(char *num, int n)
{
	int i;

	for ( i = 0 ; i < n ; i++)
	{
		 printf("%c ", num[i]);
	}
	printf("\n");
}

int main()
{
	char choice;

	do
	{
		//Declare the character array
		char num[N];

		//Declare the variable
		char temp;
		int i, n, j;

		//Prompt the user to enter the number of character
		printf("\nHow many character you want to enter: ");

		//read the number of character
		scanf("%d", &n);

		//Prompt the user to enter the character to form a list of all possible combinations
		printf("\nEnter a list of numbers to see all combinations:\n");
		for (i = 0 ; i < n; i++)
		{
			scanf(" %c", &num[i]);
			while(getchar() != '\n');
		}

		//Loop to print all the possible combinations
		for (j = 1; j <= n; j++) 
		{
			for (i = 0; i < n-1; i++) 
			{
				temp = num[i];
				num[i] = num[i+1];
				num[i+1] = temp;
				print(num, n);
			}
		}

		//Prompt the user for continuation
		printf("Do you want to continue.\nPress Y/y(yes): ");

		//Read choice
		scanf(" %c", &choice);

	}while('Y' == choice || 'y' == choice);

	return 0;
}
