/*
Assignment code to find the median of two unsorted arrays
*/

#include <stdio.h>
int main()
{
	//Delcare varible for storing the choice 
	char option;

	do
	{

	//Declare variables
	int size1, size2, index, j, temp;
	float first_median, second_median, final_median;
	
	//prompt the user to enter the elements of first array
	printf("Enter the size of first array: ");
	scanf("%d", &size1);
	printf("\n");

	if (size1 < 0 || size1 > 10)
	{
		printf("Incorrect range of array 1\n");
		return 1;
	}

	//declaring the first array
	int array1[size1];
	
	//Populate the first array
	for (index = 0; index < size1; index++)
	{
	    printf("Enter the %dth elements of first array: ", index);
		scanf("%d", &array1[index]);
	}

	printf("\n");

	//prompt the user to enter the elements of second array and read it
	printf("Enter the size of second array: ");
	scanf("%d", &size2);
	printf("\n");

	if (size2 < 0 || size2 > 10)
	{
		printf("Incorrect range of array 2\n");
		return 1;
	}

	//Declaring second array
	int array2[size2];

    //populate the second array
	for (index = 0; index < size2; index++)
	{
	    printf("Enter the %dth elements of second array: ", index);
		scanf("%d", &array2[index]);
	}
	
	printf("\n");

	//sorting first array
	for (index = 0; index < size1; index++)
	{
		for (j = index + 1; j < size1; j++)
		{
			if (array1[index] > array1[j])
			{
				temp = array1[index];
				array1[index] = array1[j];
				array1[j] = temp;
			}
		}
	}
	

	//sorting the second array
	for (index = 0; index < size2; index++)
	{
		for (j = index + 1; j < size2; j++)
		{
			if (array2[index] > array2[j])
			{
				temp = array2[index];
				array2[index] = array2[j];
				array2[j] = temp;
			}
		}
	}

	//obtaining median of first array
	if (size1 % 2 != 0)
	{
		first_median = array1[size1 / 2];
	}
	else
	{
		first_median = ((array1[size1 / 2] + array1[(size1 / 2) - 1]) / 2.0);
	}

	printf("Median of first array is %.3f\n", first_median);

	//obtaining median of second array
	if (size2 % 2 != 0)
	{
		second_median = array2[size2 / 2];
	}
	else
	{
		second_median = ((array2[size2 / 2] + array2[(size2 / 2) - 1]) / 2.0);
	}

	printf("Median of second array is %.3f\n", second_median);

	//obtaining the final median
	final_median = ((first_median + second_median) / 2.0);
	printf("the median of two array is %.3f\n", final_median);

	//prompt the user to continue whether he/she wants to continue or not
	printf("Do you want to continue ? press[Y/y]: ");
	scanf("\n%c", &option);
}while (option == 'Y' || option == 'y');

return 0;
}
