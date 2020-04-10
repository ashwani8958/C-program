/*
Demo code to compute both sum and product of two integer by one function
*/

#include <stdio.h>
void sum_product(int a, int b, int *sum, int *prod);
int main()
{
	//Declare variable
	int a,b,sum,prod;

	//prompt user to enter 1st number
	printf("Enter the value of a: ");

	//read the 1st number
	scanf("%d", &a);

	//prompt the user to enter the 2nd number
	printf("Enter the value of b: ");

	//read the 2nd variable
	scanf("%d", &b);

	//Function call
	sum_product(a, b, &sum, &prod);

	//print the sum and product
	printf("SUM: %d\n", sum);
	printf("PRODUCT: %d\n", prod);

	return 0;
}
	
//Function 
void sum_product(int a, int b, int *sum, int *prod)
{
	*sum = a + b;
	*prod = a * b;

}
