/*
To print the Decimal Number into Binary
*/

#include <stdio.h>
int main()
{
	  //declaration of variables
      int num;
      char ch;
      unsigned mask = 1 << ((sizeof(int) << 3) - 1);
    do
	{

       //prompt user to enter the number
       printf("Enter the number : ");

       //read the number
       scanf("%d",&num);
       
       //print the input number
       printf("%d = ", num);

       //for loop to convert decimal to binary
       for( ; mask; mask >>= 1)
       {
       	   num & mask ? putchar('1') : putchar('0');
       }
        
        //Print output in next line
	    printf("\n");
        
        //Modifying number to get the compliment of number
	    num = ~(num) + 1;

	    //print the modified number
        printf("%d = ", num);
        
        //Declaration of variable
	    unsigned mask1 = 1 << ((sizeof(int) << 3) - 1);

        //for loop to print the binary of modified number
	    for( ; mask1; mask1 >>= 1)
		{
			num & mask1 ? putchar('1') : putchar('0');
		}

		//next line
		printf("\n");
        
        //prompt user to continue or not
		printf("Do you want to continue..?Press[y/Y]");

		//read the user input character
		scanf("\n%c", &ch);
	}while(ch == 'Y' || ch == 'y');

	return 0;

}
