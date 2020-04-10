/*
Demo code to toggle the N bit from given location to the left
*/

#include <stdio.h>
int main()
{
	//declaration of variable
	int num,num2,pos,n;
	int clear;
	char choice;

	do
	{
		unsigned mask = 1 << ((sizeof(int) << 3) - 1);
		unsigned mask2 = 1 << ((sizeof(int) << 3) - 1);

		//prompt the user to enter the number
		printf("Enter the number: ");

		//Read the number
		scanf("%d", &num);
		
		//Prompt the user to enter the bit position to be set
		printf("Enter the position: ");

		//Read the Bit position
		scanf("%d", &pos);
		
		//prompt the user to enter the number of bits that has to be toggle
		printf("Enter the bit: ");
		
		//read the number of bits to be toggle
		scanf("%d", &n);

		//print the binary of entered number before shifting
		printf("%d before toggle\n", num);
		for ( ; mask; mask >>= 1)
		{
			num & mask ? putchar('1') : putchar('0');
		}

		//store original number in another variable
		num2 = num;

		//logic to toggle the N bits from given location to the left
		num2 ^= ~(~0 << n) << pos;

		//print the binary of shifted number 
		printf("\n%d become %d after clearing\n", num, num2);
		for ( ; mask2; mask2 >>= 1)
		{
			num2 & mask2 ? putchar('1') : putchar('0');
		}
		
		//Prompt the user to enter the choice to continue or not
		printf("\nDo you want to continue?\nPress Y/y(Yes) or any other key to exit:");

		//read the choice
		scanf(" %c", &choice);

	} while ('Y' == choice || 'y' == choice);

	return 0;
}
