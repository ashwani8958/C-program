/*
Demo code to circular right
*/

#include <stdio.h>
int main()
{
	//declaration of variable
	int num,num2,n;
	char choice;

	do
	{
		unsigned mask = 1 << ((sizeof(int) << 3) - 1);
		unsigned mask2 = 1 << ((sizeof(int) << 3) - 1);

		//prompt the user to enter the number
		printf("Enter the number: ");

		//Read the number
		scanf("%d", &num);
		
		printf("Enter the value of circular right shift: ");

		scanf("%d", &n);

		//print the binary of entered number before shifting
		printf("%d before clearing\n", num);
		for ( ; mask; mask >>= 1)
		{
			num & mask ? putchar('1') : putchar('0');
		}

		//store original number in another variable
		num2 = num;
		//num2 = (num2 >> n) | (num2 << (sizeof(int) * 8 -n) & ( 0x7f >> sizeof(int) * 8 - n ));
		num2 = (num2 >> n) | (num2 << (sizeof(int) * 8 -n));

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
