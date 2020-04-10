/*

*/
#include <stdio.h>
int add(int a, int b);
int mul(int a, int (*fp)(int, int));
int main()
{
	int p = mul(10, add);
	printf("p = %d\n", p);
}
int add(int a, int b)
{
	return a + b;
}
int mul(int a, int (*fp)(int, int))
{
	return a * (*fp)(5,3);
}
