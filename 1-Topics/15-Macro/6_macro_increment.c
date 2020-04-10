#include <stdio.h>
#define MAX(a,b) a > b ? a : b

int main()
{
	int x = 4, y = 2, temp = ++x;

	#if 0
	int m = MAX(++x, y);
	#endif

	#if 1
	int m = MAX(temp, y)
	#endif

	printf("m = %d\tx = %d\ty = %d\n",m , x, y);
	return 0;
}
