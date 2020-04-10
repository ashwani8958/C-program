/*

*/

#include <stdlib.h>
#include <stdio.h>

//Function Prototype
void mem_alloc(float **p, int *size, int n);
void populate(float **p, int *size, int n);
void find_avg(float **p, int *size, int n);
void print(float **p, int *size, int n);

//Main function
int main()
{
	//Declare variable for do while loop
	char choice;

	do
	{
		//Declare variable for storing the size
		int n;
		
		//Prompt the user to enter the number of rows
		printf("Enter the size of rows: ");

		//Read the row
		scanf("%d", &n);
		
		//Declare the pointer to store the address of each column
		float **p = malloc(n * sizeof(float *));
		
		//Declare the pointer to store the number of element in each row
		int *size = malloc(n* sizeof(int *));
		
		//Function call to allocate the memory
		mem_alloc(p, size, n);

		//Funtion call to populate the array
		populate(p, size, n);

		//Function call to calculate the average upto 2nd last column and store in last column
		find_avg(p, size, n);
		
		//Print the array
		print(p, size, n);

		//Prompt to enter choice to continue or not
		printf("\n\nDo you want to continue?\nPress y/Y(yes) or any other key to exit: ");

		//read choice
		scanf(" %c", &choice);


	}while('Y' == choice || 'y' == choice);

	return 0;
}

//Function Definition
void mem_alloc(float **p, int *size, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("Enter number of col for %d row: ", i);
		scanf("%d", size + i);
		p[i] = malloc((*(size + i) + 1) * sizeof(float));
	}
}
void populate(float **p, int *size, int n)
{
	int i,j;

	for(i = 0; i < n; i++)
	{
		printf("Enter %d value: ", size[i]);
			for(j = 0; j < size[i]; j++)
			{
				scanf("%f", (p[i] + j));
			}
	}
}
void find_avg(float **p, int *size, int n)
{
	int i,j;
	float sum;
	for(i = 0; i < n; i++)
	{
		sum = 0;
		for(j = 0; j < size[i]; j++)
		{
			sum = sum + *(p[i] + j);
		}

		*(p[i] + j) = sum/size[i];
	}
}
void print(float **p, int *size, int n)
{
	int i, j;

	for(i = 0; i < n; i++)
	{
		for(j = 0; j <= size[i]; j++)
		{
			printf("%.3f\t", *(p[i] + j));
		}
		printf("\n");
	}
}
