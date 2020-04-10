/*
Requirements:Print the following bitwise functions
*/

#include <stdio.h>
void print_bits(int num, int n);
int main()
{
	char option;
	do
	{
	    //declare variables
		double d;

		//print bits
		//entering and reading the number
		printf("Enter the number: ");
		scanf("%lf", &d);

		int *p = (int *)&d;
	   
	    p++;
		print_bits(*p, sizeof(int) * 8);
		p--;

		//p++;//give the reverse of the number
		print_bits(*p, sizeof(int) * 8);

		printf("\n");
		printf("Do you want to continue ? press[Y/y]: ");
		scanf("\n%c", &option);
	} while (option == 'Y' || option == 'y');
	
	return 0;
}
void print_bits(int num, int n)
{
	//unsigned mask  = 1 << ((sizeof(int) << 3) - 1);
	unsigned mask  = 1 << ( n - 1);

	for ( ; mask; mask >>= 1)
	{ 
	    num & mask ? putchar('1') : putchar('0');
	}
}
