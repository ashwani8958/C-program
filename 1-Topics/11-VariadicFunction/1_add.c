/*
demo code to understand the variadic function/ variable argument function
*/
#include <stdarg.h>
#include <stdio.h>

int add(int count, ...);
int main()
{
	int sum;

	sum = add(2, 1, 3);
	printf("SUM = %d\n", sum);

	sum = add(4, 1, 2, 3, 4);
	printf("SUM = %d\n", sum);

	return 0;
}
int add(int count, ...)
{
	//Delcare pointer of type va_list
	va_list ap;
	
	//initilize pointer to item after count
	va_start(ap, count);

	//Add items on by one
	int i, sum = 0;
	for(i = 0; i < count; i++)
	{
		sum += va_arg(ap, int);
	}
	
	//free the memory and set pointer to null
	va_end(ap);

	return sum;
}
