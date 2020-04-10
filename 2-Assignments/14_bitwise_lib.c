/*
Requirements:Print the following bitwise functions
Date:27/02/2018
assignment number:14
Author:Ashwani Kumar
algorithm:
1:Get n number of bits:->
a)Enter the number
b)read number
c)Enter the n number of bits
d)read bits
e)to take the n number of bits from lsb of the number and prin it in binary and decimal form using masking.
f)logic-> 
          num = num & ~(~0 << n)

2:Replace n number of bits
a)Enter the number
b)read number
c)Enter the value
d)read value
e)Enter the n number of bits
f)read n
g)to take the n number of bits from lsb of the value and replace that n number of bits from lsb of the number
h)logic:
            value = value & (~(~0 << n));
            num = num & (~0 << n);
            num = num | value;
3:to get n number of bits from position
a)Enter number
b)read number
c)Enter the n number of bits
d)read n 
e)Enter the position
f)read pos
g)to get the n number of bits from pos positioning bit of numbers
h)logic->
           num = num >> (pos - n + 1);
4:to toggle n bits from position
a)Enter the number
b)read number
c)Enter the n number of bits
d)read n
e)Enter position
f)read pos
g)to toggle the n number of bits from pos positioning bit of number
h)Logic->
           num = num ^ ((~(~0 << n)) << pos - n + 1);
5:to replace n bits from position
a)Enter the number
b)read number
c)Enter the value
d)read value
e)Enter n bits
f)read n
g)Enter the pos
h)read pos
i)to get the n number of bits from lsb of the value and replace it with the pos positiong bits of number
j)logic->
            num = num & ~(~(~0 << pos) << (pos - n + 1));
            value = value & ~(~0 << n);
            value = value << (pos - n + 1);
            num = num | value;
6:Do error checking
a)Enter the number
b)read number
c)Enter the n number of bits
d)read n
e)if (n > num)
{
	print number in binary format;
}
*/

#include <stdio.h>
int get_n_bits(int num, int n);
int replace_n_bits(int num, int value, int n);
int get_n_bits_position(int num, int n, int pos);
int toggle_n_bits_position(int num, int n, int pos);
int replace_n_bits_position(int num, int value, int n, int pos);
void print_bits(int num, int n);
int main()
{
	char option;
	do
	{
	    //declare variables
	    int num, n, pos, choice, value, GET, Replace, Get, Toggle, replace_position;
	    unsigned mask  = 1 << ((sizeof(int) << 3) - 1);
	    unsigned mask1 = 1 << ((sizeof(int) << 3) - 1);
	    unsigned mask2 = 1 << ((sizeof(int) << 3) - 1);


    
	    printf("1.get_n_bits\n");
		printf("2.replace_n_bits\n");
		printf("3.get_n_bits_position\n");
		printf("4.Toggle_n_bits_position\n");
        printf("5.replace_n_bits from position\n");
        printf("6.print_bits\n");
		printf("Enter your choice? ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1: 
			{
				//Get n number of bits
				//Entering the number
				printf("Enter the number: ");
				scanf("%d", &num);

				//enter n number of bits to be extract from lsb
				printf("Enter the number of bits to extract from lsb: ");
				scanf("%d", &n);

				//printing binary value of number
				printf("Printing the binary value of number\n");

				for ( ; mask; mask >>= 1)
				{
				   num & mask ? putchar('1') : putchar('0');
				}  
				printf("\n");

				//printing modifying value
				printf("printing the final value after bits extracted from the number\n");
				GET = get_n_bits(num, n);
           
				
				printf("%d\n", GET);

				for ( ; mask1; mask1 >>= 1)
				{
					GET & mask1 ? putchar('1') : putchar('0');
				} 
				break;
			}
	        case 2: 
	        {
				//replace n number of bits
				//Entering the and reading number
				printf("Enter the number: ");
				scanf("%d", &num);

				//Entering and reading number of bits
				printf("Enter the number of bits: ");
				scanf("%d", &n);

				//entering and reading value
				printf("Enter the number of value: ");
				scanf("%d", &value);

				//printing binary value of number
				printf("printing the binary value of number\n");

				for ( ; mask; mask >>= 1)
				{
				   num & mask ? putchar('1') : putchar('0');
				}  
				printf("\n");

				//printing binary of value
				printf("printing the binary of value\n");

				for ( ; mask1; mask1 >>= 1)
				{
					value & mask1 ? putchar('1') : putchar('0');
				}
				printf("\n");
	   
				Replace = replace_n_bits(num, value, n);

				
				printf("modifying number is\n");
				printf("%d\n", Replace);
				for ( ; mask2; mask2 >>= 1)
				{
				   Replace & mask2 ? putchar('1') : putchar('0');
				}  
	        break;
			}
	        case 3:
	        {
				//Get n number of bits from position
				//Entering and reading number
				printf("Enter the number: ");
				scanf("%d", &num);
				//Entering and reading n number of bits
				printf("Enter the number of bits: ");
				scanf("%d", &n);
				//Entering and reading the position
				printf("Enter the position: ");
				scanf("%d", &pos);
				//printing the binary value of number
				printf("printing the binary value of number\n");
				for ( ; mask; mask >>= 1)
				{
				   num & mask ? putchar('1') : putchar('0');
				}  
				printf("\n");
				Get = get_n_bits_position(num, n, pos);
				
				printf("fetching the n number of bits from the given position and returning the decimal and binary number\n");
				printf("%d\n", num);

				for ( ; mask1; mask1 >>= 1)
				{
				   Get & mask1 ? putchar('1') : putchar('0');
				}  
				break;
			}

	        case 4:  
	        {
				//Toggle n number of bits from position
				//Entering and reading number
				printf("Enter the number: ");
				scanf("%d", &num);
				//Entering and reading the n number of bits
				printf("Enter the number of bits: ");
				scanf("%d", &n);
				//Entering and reading the position
				printf("Enter the position: ");
				scanf("%d", &pos);
				//printing binary value of number
				printf("printing the binary value of number\n");
				for ( ; mask; mask >>= 1)
				{
				   num & mask ? putchar('1') : putchar('0');
				}  
				printf("\n");
				Toggle = toggle_n_bits_position(num, n, pos);
	    
				printf("printing the n number of bits from the pos positioning of decimal and binary number\n");
           
				printf("%d\n", Toggle);
				for ( ; mask1; mask1 >>= 1)
				{
				   Toggle & mask1 ? putchar('1') : putchar('0');
				}  
				break;
			}
	        
	       case 5: 
	       {
				//replace n number of bits from value and stored in the pos positioning of number
				//Entering the and reading number
				printf("Enter the number: ");
				scanf("%d", &num);

				//entering and reading value
				printf("Enter the number of value: ");
				scanf("%d", &value);

				//Entering and reading number of bits
				printf("Enter the number of bits: ");
				scanf("%d", &n);

				printf("Enter the number of position: ");
				scanf("%d", &pos);

				//printing binary value of number
				printf("printing the binary value of number\n");

				for ( ; mask; mask >>= 1)
				{
				   num & mask ? putchar('1') : putchar('0');
				}  
				printf("\n");

				//printing binary of value
				printf("printing the binary of value\n");
				for ( ; mask1; mask1 >>= 1)
				{
					value & mask1 ? putchar('1') : putchar('0');
				}
				printf("\n");
				replace_position = replace_n_bits_position(num, value, n, pos);

				
				printf("modifying number is\n");
				printf("%d\n", replace_position);
				for ( ; mask2; mask2 >>= 1)
				{
				   replace_position & mask2 ? putchar('1') : putchar('0');
				}  
				break;
		   }

           case 6: 
           {
			   //print bits
			   //entering and reading the number
			   printf("Enter the number: ");
			   scanf("%d", &num);

			   //Entering and reading the n number of bits
			   printf("Enter n number of bits: ");
			   scanf("%d", &n);
	    
			   print_bits(num, n);
			   break;
		   }

		   default:
		   {
		   	   //wrong choice
				printf("you entered wrong choice\n");
		   }
      }
      printf("\n");
      printf("Do you want to continue ? press[Y/y]: ");
      scanf("\n%c", &option);
	} while (option == 'Y' || option == 'y');
	
	return 0;
}

//Function Definition
int get_n_bits(int num, int n)
{
           //logic to get n number of bits
	        num = num & (~(~0 << n));
	        return num;
}

int replace_n_bits(int num, int value, int n)
{
	        //fetch n number of bits from lsb end of value and replace in the last n bits of number
            value = value & (~(~0 << n));
            num = num & (~0 << n);
            num = num | value;
            return num;

}
int get_n_bits_position(int num, int n, int pos)
{
	       //fetch n number of bits from the given position and return the number
           num = num >> (pos - n + 1);
           return num;

}
int toggle_n_bits_position(int num, int n, int pos)
{
	       //invert the n number of bits from the pos positioning bit of number
           
           num = num ^ ((~(~0 << n)) << pos - n + 1);
           return num;

}
int replace_n_bits_position(int num, int value, int n, int pos)
{
	        //fetch n number of bits from lsb end of value and replace in the pos positioning bit of number 
            
            num = num & ~(~(~0 << pos) << (pos - n + 1));
            value = value & ~(~0 << n);
            value = value << (pos - n + 1);
            num = num | value;
            return num;

}
void print_bits(int num, int n)
{
	       unsigned mask  = 1 << ((sizeof(int) << 3) - 1);
	       //check if n is greater or less than number

	       if (n > num)
		   {
	           for ( ; mask; mask >>= 1)
	           { 
		            num & mask ? putchar('1') : putchar('0');
	           }
		   }
	       else
		   {
			   printf("invalid n bit\n");
		   }
		   


}
