#include <stdio.h>
#define SET_N_BIT(num,n) num = num | 1 << n;

int main()
{
	int num = 0xAF;
	int n = 4;
	printf("%x\n", num);

	SET_N_BIT(num,n);
	printf("%x\n", num);

	return 0;
}

