/*
Assignment code to swap the two argument with the help of macro
*/

#include <stdio.h>
#define GENERIC_SWAP(a,b,type) {	  type t;\
									  t = a;\
									  a = b;\
									  b = t;\
								}

int main()
{
	//Declare the variable of integer type
	int a = 5, b = 9;

	//Print the variable before swapping
	printf("\nBefore swap\na: %d\tb: %d\n",a ,b);

	//Function call 
	GENERIC_SWAP(a,b,int);

	//print the variable after swapping
	printf("\nAfter swap\na: %d\tb: %d\n",a ,b);
	
	//Declare the variable of float type
	float c = 5.9, d =89.6;

	//Print the variable before swapping
	printf("\nBefore swap\nc: %f\td: %f\n",c ,d);

	//Function call 
	GENERIC_SWAP(c,d,float);

	//print the variable after swapping
	printf("\nAfter swap\nc: %f\td: %f\n",c ,d);
	
	//Declare the variable of character type
	char e = 'a', f = 'r';

	//Print the variable before swapping
	printf("\nBefore swap\ne: %c\tf: %c\n",e ,f);

	//Function call 
	GENERIC_SWAP(e,f,char);

	//print the variable after swapping
	printf("\nAfter swap\ne: %c\tf: %c\n",e ,f);
	
	return 0;

}
