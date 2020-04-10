/*
Assignment code to print factorial of number using recurive main.
*/

#include <stdio.h>
int main()
{
	//Declaration of variable
	char choice;
	static int num,copy_num;
	static int fact = 1;
	static int flag = 1;
	
	do
	{
		if ( flag == 1)
		{
			//prompt user to enter the number
			printf("Enter the number to find its factorial: ");

			//Read the number
			scanf("%d", &num);
				
			copy_num = num;

			if (num == 0)
			{
				printf("Factorial of %d is %d\n", num, fact);
			}

			else if (num < 0)
			{
				puts("No factorial for negative number");
			}

		flag = 0;
		}
		
		if( num > 1)
		{
			fact = fact * num--;
			if ( num > 1)
			{
				main();
				return 0;
			}
			else
			{
				printf("Factorial of %d is %d\n",copy_num,fact);
			}
		}

		//prompt the user to enter choice
		printf("\nDo you want to continue?\nPress Y,y(yes) and any other key to exit: ");

		//read the choice
		scanf(" %c", &choice);

		flag = 1;
		fact = 1;
	} while('Y' == choice | 'y' == choice);

	return 0;
}
