/*
Requirements:Print the float and double in IEEE format
*/

#include <stdio.h>

//Function Prototype
void print_float(void);
void print_double(void);
void print_bits(int num, int n);

//Main function
int main()
{
	//Declare varible
	char option;

	do
	{
		//Introductory Message to give information what code does
		printf("Code to print FLOAT and DOUBLE in IEEE format\n\n");
		
		//Declare variable to store choice between float and double
		int choice;
		
		//Print the menu
		printf("1. FLOAT\n2. DOUBLE\n");
		printf("Enter choice: ");
		
		//Read the choice from menu
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
			{
				print_float();
				break;
			}
			case 2:
			{
				print_double();
				break;
			}
			default:
			{
				printf("Enter from give option only\n");
			}
		}
		
		//Ask user to continue or not
		printf("Do you want to continue ?\nPress[Y/y]: ");

		//read the option enter by user
		scanf(" %c", &option);

	} while (option == 'Y' || option == 'y');
	
	return 0;
}

//Function Definition
void print_float(void)
{
    //declare variables
	float f;

	//print bits
	//entering and reading the number
	printf("Enter the number: ");
	scanf("%f", &f);
	
	//Function call to print binary 
	print_bits(*((int *)&f), sizeof(int) * 8);
	printf("\n");

}
void print_double(void)
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
