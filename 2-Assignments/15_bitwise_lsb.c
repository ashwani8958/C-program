/*
reqirements:read the input n, put the (b - a +  1) lsb's of n into i.
*/

#include <stdio.h>
int replace_bits(int num, int i, int a, int b);
int main()
{
	char option;
	do
	{

	        //declare variables
	        int num;
	        int i;
	        int a, b, replace;
	        unsigned mask = 1 << ((sizeof(int) << 3) - 1);
	        unsigned mask1 = 1 << ((sizeof(int) << 3) - 1);
	        unsigned mask2 = 1 << ((sizeof(int) << 3) - 1);

	        //declare variables
            printf("Enter the number: ");
	        scanf("%d", &num);

	        //entering and reading i
	        printf("Enter the number of i: ");
	        scanf("%d", &i);

	        //Entering and reading a
	        printf("Enter the number of a: ");
	        scanf("%d", &a);
	        //Entering and read b
	        printf("Enter the number of b: ");
	        scanf("%d", &b);

           //printing binary value of number
            printf("printing the binary value of number\n");
	        for ( ; mask; mask >>= 1)
	        {
		       num & mask ? putchar('1') : putchar('0');
	        }  
	        printf("\n");

	        //printing binary of i
            printf("printing the binary of i\n");
	        for ( ; mask1; mask1 >>= 1)
	        {
		        i & mask1 ? putchar('1') : putchar('0');
	        }
	        printf("\n");

	        replace = replace_bits(num, i, a, b);

	        
            printf("modifying number is\n");
            printf("%d\n", replace);
	        for ( ; mask2; mask2 >>= 1)
	        {
		       replace & mask2 ? putchar('1') : putchar('0');
	        }  
            printf("Do you want to continue ? press[Y/y]: ");
            scanf("\n%c", &option);
	}
	while (option == 'Y' || option == 'y');
	return 0;
}
int replace_bits(int num, int i, int a, int b)
{
	// putting the (b - a +  1) lsb's of n into i.
	num = num & ~((~0 << (b - a + 1)));
	num = num << (b - a + 1);
	i = i & ~((~(~0 << (a)) << (b - a + 1)));
	i = i | num;
	return i;
}
