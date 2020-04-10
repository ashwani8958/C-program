/*
To print the fibonnaci series using recursion
*/

#include <stdio.h>
void fibonacci(int, int, int);

int main()
{
	//Declaration of variables
	int num, first, second;
	char ch;

	do
	{
		//prompt user to enter the number
		printf("Enter the number : ");

		//read the number
		scanf("%d", &num);
        
        //initializing the result variable
		first = 0;
		second = 1;

		//calling the function
		fibonacci(num, first, second);
        
        putchar('\n');

        //Prompt user to continue or not
        printf("Do you want to continue..?Press[Y/y] : ");

        //read the character
        scanf("\n%c", &ch);
	
	}while(ch == 'Y' || ch == 'y');

	return 0;

}

void fibonacci(int num, int first, int second)
{
 
	//Declaration of variables
	int temp;

	if(first < 0)
	{
		temp = - first;
	}
	else
	{
		temp = first;
	}

	if(num < 0)
	{
		//if entered number is negative, then get negative fibonacci series
		if(temp <= -num)
		{
			printf("%d ", first);

			temp = second;

			second = first - second;

			first = temp;

			fibonacci(num, first, second);
		}
	}
	else
	{
		//if entered number is positive, then get positive fibonacci seies
		if(temp <= num)
		{
			printf("%d ", first);
			temp = second;
			second = first + second;
			first = temp;
			fibonacci(num, first, second);
		}
	}
}
