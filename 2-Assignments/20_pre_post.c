/*
Assignment code to implement pre and post increment and decrement using bitwise operator
*/

#include <stdio.h>

//Function Prototypes
void pre_increment(int num);
void post_increment(int num);
void pre_decrement(int num);
void post_decrement(int num);
//Main function
int main()
{
	//Declare variable
	int option, num;
	char choice;

	do
	{
		//Description of code
		printf("\nCode to show pre and post increment and decrement the integer\n");

		//Prompt the using to enter the number
		printf("Enter the number: ");

		//Read the Number
		scanf("%d", &num);

		//Give option to user to choose 
		printf("\n");
		printf("Enter the appropriate option to contniue:\n1.Pre-increment the integer\n2.Post-increment the interger\n3.Pre-decrement the interger\n4.Post-decrement the integer\n");
		printf("Enter the choice: ");
		
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
			case 3:
			{
				pre_decrement(num);
				break;
			}
			case 4:
			{
				post_decrement(num);
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
void pre_decrement(int num)
{
	//Declare variable
	int i = 1;
	int count = sizeof(int) * 8;

	//Decrement by 1 logic
	while ((num & i) == 0 && count)
	{
		count--;
		num = num ^ i;
		i = i << 1;
	}
	num = num ^ i;

	
	//print new line
	printf("\nPre-Decrement\n");
	
	//print result
	printf("Number is %d\n", num);
	printf("After Decrement number is %d\n", num);
}
void post_decrement(int num)
{
	//Declare variable
	int i = 1;
	int result;
	int count = sizeof(int) * 8;

	//Store number another variable for displaying later
	result = num;

	//Decrement by 1 logic
	while((result & i) == 0 && count)
	{
		count--;
		result = result ^ i;
		i = i << 1;
	}
	result = result ^ i;
	
	//print new line
	printf("\nPost-Decrement\n");
	
	//print result
	printf("Number is %d\n", num);
	printf("After Decrementing result is %d\n", result);
}
