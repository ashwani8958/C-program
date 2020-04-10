#include <stdio.h>

typedef struct
{
	unsigned int a:3;
	unsigned int b:3;
}data_t;

int main()
{
	data_t  x;
	x.a = 2;
	x.b = 6;
	printf("%d\n", x.a);
	printf("%d\n", x.b);
	return 0;
}
