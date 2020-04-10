/*

Assignment 32 : To read float values and sort them without modifying array.

*/
#include <stdio.h>

//Function prototype
void sort_print(float *, int);

int main()
{
	//Declare the variables
	char option;
	int n, i;

	do
	{
		//Get the number of float values to sort
		printf("Enter the number of float values : ");

		scanf("%d", &n);
	
		float arr[n];

		//Get the n float values to be sorted
		printf("Enter %d float values : \n", n);

		for (i = 0;i < n; i++)
		{
			printf("Enter %d item in array: ",i);
			scanf("%f", &arr[i]);
		}
		
		//Display the result
		printf("Number in ascending order\n");
		
		//Function call
		sort_print(arr, n);
		putchar('\n');
		
		//Print the original array
		printf("Original array\n");
		for( i = 0; i < n; i++)
		{
			printf("arr[%d]: %.2f\n",i, arr[i]);
		}

		putchar('\n');

		//prompt the user to repeat
		printf("Do you want to repeat?(y/n) : ");

		scanf("\n%c", &option);

	} while(option == 'Y' || option == 'y');

	return 0;
}

//Function Definition
void sort_print(float *arr, int n)
{
	//Declare the variables
	float first, second, last;
	int i, j, repeat = 0, flag = 1;

	//Initialize a value to first and last variable as reference
	first = arr[0];
	last = arr[0];
	
	//Get the smallest number 
	for (i = 0; i < n; i++)
	{
		if (first > arr[i])
		{
			first = arr[i];
		}
	}
	
	//Get the greatest number
	for (i = 0; i < n; i++)
	{
		if (last < arr[i])
		{
			last = arr[i];
		}
	}
	
	//Get the largest value in second var to compare 
	second = last;
	
	//Get the next smallest number
	for (i = 0; i < n; i++)
	{
		if (arr[i] > first)
		{
			if(second > arr[i])
			{
				second = arr[i];
			}
		}
	}

	//Print from the least number
	for (i = 0; i < n; i++)
	{
		printf(" %.2f\t", first);
		
		//Check if the printed number has multiple occurence
		if (flag)
		{
			for (j = 0;j < n;j++)
			{
				if (arr[j] == first)
				{
					repeat++;
				}
	
			}

			repeat--;

			flag = 0;

		}

		//If printed number has more than 1 occurence print it again
		if (repeat)
		{
			repeat--;
			continue;
		}

		//If the previuos number has only one occurence, then store next smallest value in first variable
		first = second;
		second = last;

		//Set the flag for checking multiple occurence checking
		flag = 1;
		
		//Get the next smallest value
		for (j = 0; j < n; j++)
		{
			if (arr[j] > first)
			{
				if(second > arr[j])
				{
					second = arr[j];
				}
			}
		}
		
	}

}
