/*

Assignment 34 : To sort the names of given array Alphabetically.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char **, int);
void print(char **, int);

int main()
{
	//Declaration of varaibles
	char **name;
	char temp[100];
	int row;
	char option;
	
	do
	{
		//Get the number of rows
		printf("Enter the number of names : ");
	
		scanf("%d", &row);
	
		//Initialize number of rows
		name = malloc(row * sizeof(char *));
	
		printf("Enter the %d names in each: \n", row);
	
		for (int i = 0; i < row;i++)
		{
			//Get the name
			scanf("\n%s", temp);
			
			//Allocate space for charcters and a null character
			name[i] = malloc((strlen(temp) + 1) * sizeof(char));
			
			//Copy string to array
			strcpy(name[i], temp);
	
			//if charcters exceed 32 exit
			if (strlen(name[i]) > 32)
			{
				puts("Error : Name must be less than 32 characters");
				return 0;
			}
		}
	
		//Sort the names
		sort(name, row);
	
		printf("The sorted names are: \n");

		//Display the sorted order
		print(name, row);

		//Prompt the user to repeat
		printf("Do you want to repeat?(y/n) : ");

		scanf("\n%c", &option);

	} while (option == 'y' || option == 'Y');
	
}

void sort(char **name, int row)
{
	//Declare the variables
	int i,j;
	char *temp;

	//Check 2 consecutive names and swap them
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row - 1 - i; j++)
		{
			if (strcmp(name[j], name[j + 1]) > 0)
			{
				temp = name[j];
				name[j] = name[j + 1];
				name[j + 1] = temp;
			}
		}
	}
}

void print(char **name, int row)
{
	int i;

	//Print the names in order
	for (i = 0; i < row; i++)
	{
		printf("%s\n", name[i]);
	}
}
