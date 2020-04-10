/*

*/

#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int main()
{
	int i;

	//array of function pointer
	int (*fp[3])(int, int) = {add, sub, mul};

	for(i = 0; i < 3; i++)
	{
		printf("%d\n", (fp[i])(5,3));
	}
	return 0;
}

int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
