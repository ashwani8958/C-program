#include <stdio.h>
#define SIZEOF(x) (char *)(&x + 1) - (char *)(&x)

int main()
{
	int a;
	double d;

	printf("sizeof(a): %zu\n", SIZEOF(a));
	printf("sizeof(d): %zu\n", SIZEOF(d));

}
