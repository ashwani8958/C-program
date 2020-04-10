/*
Demo code to sort the array enter through command line argument
*/

#include <stdio.h>
#include <stdlib.h>

void bubble(float *fptr, int argc);
int main(int argc, char *argv[])
{
	//Declare the variable for loop
	int i;

	//Dynamic memory allocation
	float *fp = malloc((argc - 1) * sizeof(float));

	//copy the item in float array
	for(i = 1; argv[i]; i++ )
	{
		fp[i - 1] = atof(argv[i]);
	}

	//print the unsorted float array
	printf("Unsorted array\n");
	for(i = 0; i < (argc -1); i++)
	{
		printf("fp[%d]: %f\t", i, fp[i]);
	}
	printf("\n");
	
	//calling function to sort the array
	bubble(fp, (argc - 1));

	//print the sort float array
	printf("Sorted array\n");
	for(i = 0; i < (argc -1); i++)
	{
		printf("fp[%d]: %f\t", i, fp[i]);
	}
	printf("\n");

	return 0;
}

void bubble(float *fptr, int argc)
{
	//declare variable
	int i,j;
	float swap;
	
	//swap logic
	for(i = 0; i < argc; i++)
	{
		for(j = 0; j < argc - i - 1; j++)
		{
			if(fptr[j] > fptr[j + 1])
			{
				swap = fptr[j];
				fptr[j] = fptr[j + 1];
				fptr[j + 1] = swap;
			}
		}
	}
}
