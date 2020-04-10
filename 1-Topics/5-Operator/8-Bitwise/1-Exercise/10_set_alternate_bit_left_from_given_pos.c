/*
Demo code to toggle alternative N bits from given location to the left
*/

#include <stdio.h>
int main()
{
	//declare variables
	int num,num2, pos, n;
	char choice;

	do
	{
		unsigned mask = 1 << ((sizeof(int) << 3) - 1);
		unsigned mask2 = 1 << ((sizeof(int) << 3) - 1);
		unsigned mask3 = 0;
		//prompt the user to enter the number
		printf("Enter the number: ");

		//read the number
		scanf("%d", &num);
		
		//prompt the user to enter the position
		printf("Enter the position: ");
		
		//read the position
		scanf("%d", &pos);
		
		//prompt the user to enter the number of bits that has to be set 
		printf("Enter the bit: ");
		
		//read the number of bits that has to be set 
		scanf("%d", &n);
		
		//print binary for entered number
		printf("%d before toggling alternative bits\n", num);
		for ( ; mask; mask >>= 1)
		{
				num & mask ? putchar('1') : putchar('0');
		}

		//store the original number in a another variable for printing
		num2 = num;

		//logic to set the bits
		//num2 = num2 ^ (1 << (n + 1) | 1 << pos);
		//num2 = num2 | (~(~0 << n)) << pos;
		/*
		int i;
		int max;
		if ( (n - pos) % 2 == 0)
		{
			max = (( n - pos) + 2) / 2;
		}
		else
		{
			max = n / 2;
		}
		for(i = 1; i <= max; i++)
		{
			mask3 =mask3 | 1 << pos;
			pos = pos + 2;
		}
		*/
		mask3 = ((unsigned)0XFF << (n -pos)) & ( (unsigned)0X55 << n );

		printf("\nMask3 : %d\n", mask3);
		num2 = num2 ^ mask3;

		printf("\n%d become %d after toggling alternative bits\n", num,num2);
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
