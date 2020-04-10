/*
Assignment code to print fabonacci series
*/

#include <stdio.h>
int main()
{
	//declare variables
	char option;

	do
	{
		//Declare variable for each run
		int first=0,second=1,i,num,sum=1;
		
		//Enter the number
		printf("Enter the number: ");

		//read number
		scanf("%d", &num);
		if (num > 0)
		{
			//print 1st term
			printf("%d\t", first);

			//print 2nd term
			printf("%d\t", second);
		
		   //print fabonacci series fo number greater than zero
		   for (sum; sum <= num; )
		   {
			   printf("%d\t", sum);
			   first = second;
			   second = sum;
			   sum = first + second;
		   } 	
		}

		else
		{
			//print fabonacci series for number less than zero
			printf("%d\t", first);
			
			for (sum; sum >= num; )
			{
				printf("%d\t", sum);
				sum = first - second;
				first = second;
				second = sum;
			
			}
		}

		printf("\nWant to continue?\nPress[Y/y]: ");
		scanf("\n%c", &option);
	 
	} while (option == 'Y' || option == 'y');

	 return 0;
}
