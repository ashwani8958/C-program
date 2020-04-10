/*
Assignment code to demote float to integer without storing it in the integer
*/

#include <stdio.h>

//Declare struct
typedef struct
{
	unsigned mantissa:23;
	unsigned exp:8;
	unsigned sign:1;
}data_t;

//Function prototype
void print_bits( int num, int n);

//Main function
int main()
{
	//Declare the float type variable
	float float_num;
	
	//Prompt the user to enter float number
	printf("Enter the float number: ");

	//read the float number
	scanf("%f", &float_num);
	
	//Declare the variable of struct data_t type
	data_t *p = (data_t *)&float_num;
	
	//Print sign
	printf("sign bit: ");
	print_bits(p->sign,1);
	printf("\n");
	
	//print exponent
	printf("Exponent: ");
	print_bits(p->exp,8);
	printf("\n");

	//Print mantissa
	printf("Mantissa: ");
	print_bits(p->mantissa,23);
	
	//to find power
	int n  = (p->exp) - 127;
	

	int demoted_value = ((p->mantissa) >> (23 - n)) | ( 1 << n);
	
	//if number is less the zero print it with minus sign
	if ( float_num < 0)
	{
		printf("\nDemoted value of %f is -%d\n", float_num, demoted_value);
	}

	else
	{
		printf("Demoted value of %f is %d\n", float_num, demoted_value);
	}
	return 0;
}

//Function Definition
void print_bits(int num, int n)
{
	unsigned mask = 1 << ((n - 1));
	//unsigned mask  = 1 << ((sizeof(int) << 3) - 1);

		for ( ; mask; mask >>= 1)
	    {
			num & mask ? putchar('1') : putchar('0');
	    }

	    printf("\n");
}
