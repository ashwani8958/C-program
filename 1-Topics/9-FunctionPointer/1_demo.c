/*
Function pointer demo code
*/

#include <stdio.h>
int add (int a, int b);
int main()
{
	int a = 5, b = 3;
	int (*fp)(int, int);

	fp = add;

	printf("function call by pointer\n");
	int s = (*fp)(a,b);
	printf("Sum : %d\n", s);

	printf("Function call by name\n");
	s = add(a,b);
	printf("Sum : %d\n", s);

	return 0;
}
int add(int a, int b)
{
	return a + b;
}
