/*
Assignment code to  print the all prime numbers up to a given  limit
*/

#include <stdio.h>
#include <math.h>
int main()
{
	//Declareing variable
	char option;

	do
	{
		//declareing the variable
		int num, index, composite;

		//promt the user to enter the limit
		printf("Enter the number upto which you want to find prime number : ");

		//read the limit
		scanf("%d", &num);

		//declaring the array
		int array[num];

		//intialising the array item;
		array[0]=0;
		array[1]=0;
		

		//find the prime numbers in between the limit
		for (index = 0; index < num; index++)
		{
			array[index] = 1;
		}

		/*
		for (index = 4; index <= sqrt(num); )
		{
			array[index] = 0;
			index=index+2;
		}
		for (index = 9; index <= sqrt(num); )
		{
			array[index] = 0;
			index=index+3;
		}
		for (index = 15; index <= sqrt(num); )
		{
			array[index] = 0;
			index=index+5;
		}
		for (index = 14; index <= sqrt(num); )
		{
			array[index] = 0;
			index=index+7;
		}
		*/
		for (index = 2; index < sqrt(num); index++)
		{
			for (composite = index * index; composite < num; composite = composite + index)
			{
					array[composite] = 0;
				
			}
		}
	
		printf("The prime numbers upto the limit  %d:\n", num);
		for (index = 2; index < num; index++)
		{
			if (array[index] == 1)
			{
				printf("%d\t", index);
			}
		}
				printf("\n");

	//Promt the user whether to continue
	printf("DO you want to continue?[Yy/Nn]: ");

	//Read the option
	scanf(" %c", &option);

	} while (option == 'Y' || option == 'y');

return 0;

}
