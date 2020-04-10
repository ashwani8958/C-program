/*
Assignment code to implement circular right and circular left shifting operation
*/

#include <stdio.h>

//Function prototypes
int circular_right(int num, int n);
int circular_left(int num, int n);

//Main function
int main()
{
	char option;
	do
	{
		//declare variables
		int num;
	    int choice, n, result;
	    unsigned mask  = 1 << ((sizeof(int) << 3) - 1);
	    unsigned mask1 = 1 << ((sizeof(int) << 3) - 1);

		//print number
	    printf("Enter the number: ");

	    //Read the number
	    scanf("%d", &num);

        //showing the option
	    printf("1.Circular_right_shift\n");
		printf("2.Circular_left_shift\n");
		printf("Enter your choice: ");

		//Read the choice
		scanf("%d", &choice);

	    //Entering the number of bits to be shifted to right or left
	    printf("Enter the number of bits to be shifted: ");

	    //Read the number of bits to be shifted
	    scanf("%d", &n);

		switch (choice)
		{
			case 1:
			{

				//printing binary value of number
				printf("Printing the binary value of %d", num);
				printf("\n");

				for ( ; mask; mask >>= 1)
				{
				   num & mask ? putchar('1') : putchar('0');
				}  
				printf("\n");

				result = circular_right(num, n);
				printf("After shifting %d, %d bit position result in %d",num, n, result);
				printf("\n");
				
				//printing the binary value of result
				for ( ; mask1; mask1 >>= 1)
				{
					result & mask1 ? putchar('1') : putchar('0');
				}
				break;
			}

	        case 2:
	        {
				
				//binary value of number
				printf("Printing the binary value of %d", num);
				printf("\n");

				for ( ; mask; mask >>= 1)
				{
				   num & mask ? putchar('1') : putchar('0');
				}  
				printf("\n");
				
				result = circular_left(num, n);
				printf("After shifting %d, %d bit position result in %d",num, n, result);
				printf("\n");
				
				for ( ; mask1; mask1 >>= 1)
				{
					result & mask1 ? putchar('1') : putchar('0');
				}
				break;
			}

            default:
            {
				printf("You entered wrong choice\n");
			}
	}
	       printf("\n");
	       printf("Do you want to continue ? press[Y/y]: ");
	       scanf("\n%c", &option);
	}
	while (option == 'Y' || option == 'y');
   
	return 0;
}

//Function Definition
int circular_right(int num, int n)
{
	//Declare variable
	int res;

	//If number is greater than zero 		
    if (num > 0)
	{
	    res = (num >> n) | (num << (sizeof(int) * 8 - n));
	    return res;
	        
	}

	//If number is less than then zero
	else
	{
		res = (num >> n) & ~((~(~0 << n)) << ((sizeof(int) * 8) - n));
		res = res | (num << ((sizeof(int) * 8) - n));
		return res;
	}

}

//Function Definition
int circular_left(int num, int n)
{
	//Declare variable
	int res;
	
	//If number is greater than zero
	if (num > 0)
	{
		res = (num << n) | (num >> (sizeof(int) * 8 - n));
		return res;
	}

	//If number is less than zero
	else
	{
		res = ((num >> n) >> ((sizeof(int) * 8) - n)) & ~(~0 << n);
		res = res | (num << n);
		return res;
	}
}
