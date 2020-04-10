/*
Assignment code to implement pre and post increment using bitwise operator
*/

#include <stdio.h>

//Function Prototypes
void pre_increment(int num);
void post_increment(int num);

//Main function
int main()
{
	//Declare variable
	int option, num;
	char choice;

	do
	{
		//Description of code
		printf("Code to pre-increment or post-increment the integer\n");

		//Prompt the using to enter the number
		printf("Enter the number: ");

		//Read the Number
		scanf("%d", &num);

		//Give option to user to choose 
		printf("\n");
		printf("Enter the appropriate option to contniue:\n1.Pre-increment the integer\n2.Post-increment the interger\n");
		
		//Read the option
		scanf("%d", &option);
		
		//Perform option accroding to choice
		switch(option)
		{
			case 1:
			{
				pre_increment(num);
				break;
			}
			case 2:
			{
				post_increment(num);
				break;
			}
			default:
			puts("Enter the correct option");
			
		}

		//prompt the user to run the code again
		printf("\nDo you want to continue?\nPress Y/y(yes) or any other key to exit: ");

		//Read the choice of user
		scanf(" %c", &choice);
		} while ( 'y' == choice || 'Y' == choice );

	return 0;
}

//Function Definition
void pre_increment(int num)
{
	//Declare variable
	int i = 1;

	//Increment by 1 logic
	while (num & i)
	{
		num  = num ^ i;
		i = i << 1;
	}
	num  = num ^ i;
	
	//print new line
	printf("\nPre-Increment\n");
	
	//print result
	printf("Number is %d\n", num);
	printf("After incrementing number is %d\n", num);
}
void post_increment(int num)
{
	//Declare variable
	int i = 1, result;
	
	//Store number another variable for displaying later
	result = num;

	//Increment by 1 logic
	while (num & i)
	{
		num = num ^ i;
		i = i << 1;
	}
	num = num ^ i;
	
	//print new line
	printf("\nPost-Increment\n");
	
	//print result
	printf("Number is %d\n", result);
	printf("After incrementing result is %d\n", num);
}
