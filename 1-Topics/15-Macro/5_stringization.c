/*
single '#' replace x with "a + b", a + b as a string
*/

#include <stdio.h>
#define PRINT(x) printf(#x " = %d\n", x) 

int main()
{
	int a = 5, b = 5;
	PRINT (a + b);
	return 0;
}
