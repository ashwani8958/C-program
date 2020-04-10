/*
Demo code to set the Nth bit of given number
*/

#include <stdio.h>
int main()
{
	//declaration of variable
	int num,num2;
	int shift;
	char choice;
	unsigned mask = 1 << ((sizeof(int) << 3) - 1);
	unsigned mask2 = 1 << ((sizeof(int) << 3) - 1);

	do
	{
		//prompt the user to enter the number
		printf("Enter the number: ");

		//Read the number
		scanf("%d", &num);
		
		//Prompt the user to enter the bit position to be set
		printf("Enter the position of bit to be set: ");

		//Read the Bit position
		scanf("%d", &shift);

		//print the binary of entered number before shifting
		printf("%d before setting %d bit\n", num, shift);
		for ( ; mask; mask >>= 1)
		{
			num & mask ? putchar('1') : putchar('0');
		}

		//store original number in another variable
		num2 = num | (1 << shift);

		//print the binary of shifted number 
		printf("\n%d become %d after setting %d bit\n", num,num2, shift);
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
