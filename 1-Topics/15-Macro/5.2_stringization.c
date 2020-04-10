#include <stdio.h>
#define PRINT(x, type) printf("value : " #x "=" #type"\n", x)

int main()
{
	int x = 4;
	float f = 3.14;
	char ch = 'A';

	PRINT(x, %d);
	PRINT(f, %f);
	PRINT(ch, %c);
	return 0;
}
