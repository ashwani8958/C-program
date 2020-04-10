#include <stdio.h>
typedef struct sample
{
	char a;
	char c;
	int b;
}data_t;

int main()
{
	printf("Sizeof(data_t): %zu\n", sizeof(data_t));
	return 0;
}
