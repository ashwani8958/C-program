/*
Demo code to print fibonacci series
*/

#include <stdio.h>
int main()
{
	//Declaration of variable
	int num;
	int fib1,fib2,fib3;

	//prompt user to enter the number
	printf("Enter the upto which number in fibonacci series you want to print: ");

	//Read the number
	scanf("%d", &num);
	
	//initialization of 1st term
	fib1=0;

	//print 1st term
	printf("%d\t", fib1);

	//initialization of 2st term
	fib2=1;

	//print 2st term
	printf("%d\t", fib2);

	fib3 = fib1 + fib2;
	
	for (fib3; fib3 <= num; )
	{
		printf("%d\t", fib3);
		fib1=fib2;
		fib2=fib3;
		fib3=fib1+fib2;
	}

	printf("\n");

	return 0;
}
