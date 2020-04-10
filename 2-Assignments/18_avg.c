/*
Assignment to find average in three different ways
1. Normal average
2. Command line argument
3. Environment variable
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 15000

int main( int argc, char *argv[], char *envp[])
{
	char option;

	do
	{
		//Declare variable
		int i, array[20], n, number[MAXLEN];
		float avg, sum = 0.0;
		int choice, count = 0;

		//Declare pointer
		char *arr;
		char *token;

		//Prompt user to enter the choice
		printf("Enter the choice:\n1-Normal avg\n2-Command line argument\n3-Environment variable arguments\n");
		printf("Enter you choice: ");

		//Read choice
		scanf("%d", &choice);
		
		//Case execution based on choice
		switch(choice)
		{
			//Calculate average through user inputs
			case 1:
				
				//prompt user to enter the number of element in array
				printf("Enter the number of array\n");

				//Read the element
				scanf("%d", &n);

				//populate the array
				for (i = 0; i < n; i++)
				{
					printf("Enter the %d item: ", i +1);
					scanf("%d", &array[i]);
				}

				//Calculating sum
				for (i = 0; i < n; i++)
				{
					sum = sum + array[i];
				}

				//Finding average
				avg = sum / n;
				
				//print average
				printf("%f\n", avg);

				break;

			//Calculate average through Command line argument 	
			case 2:
				
				for(i = 0; argv[i]; i++)
				{
					sum = sum + atoi(argv[i]);
				}

				avg = (float)sum / (argc -1);

				printf("avg: %f\n", avg);

				break;
			 
			//calculate average through evironment variable 
			case 3:
				printf("From shell export a variable which contain numbers. export arr = 1 2 3 4 \n");

				//Set ARR before executing the code
				arr = getenv("ARR");
				
				//print the ARR
				printf("Arr =  %s\n", arr);
			
				//As shell variable are treated as string so we have to generate tokens
				token = strtok(arr, " ");

				while (token != NULL)
				{	
					//to keep count of number of token to find average
					count++;

					//Integer eq. of string token
					number[count] = atoi(token);
					
					//Calculate sum
					sum = sum + number[count];

					token = strtok(NULL, " ");
				}
				
				//find average
				avg = sum / count;

				printf("Avg = %f\n", avg);

				break;
		}

		//Prompt the user to continue or not
		printf("Do you continue\nPress Y/y(yes): ");

		//Read option
		scanf("\n%c", &option);
	}while('Y' == option || 'y' == option);

	return 0;
}

