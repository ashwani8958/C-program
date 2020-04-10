#include <stdio.h>
#define MAX(a,b) a > b ? a : b

int main()
{
	int x = 5, y = 6;
	int m = MAX(x,y);

	printf("m = %d\n", m);
	return 0;
}
