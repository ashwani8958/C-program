/*
Demo code to convert Decimal to Binary 
*/

#include <stdio.h>
int main()
{
	//Declaration of variable
	int num;
	char choice;

	do
	{

		unsigned mask = 1 << ((sizeof(int) << 3) - 1);

		//Prompt the user to enter the Decimal number
		puts("Enter the number: ");
		
		//Read the number
		scanf("%d", &num);

		for( ; mask; mask >>= 1)
		{
			num & mask ? putchar('1') : putchar('0');
		}

		puts("\nDo you want to continue?\n Press Y/y(yes) or any other key to exit:");

		scanf(" %c", &choice);
	}

	return 0;
}
