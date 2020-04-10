#include <stdio.h>
int main()
{
	int *pa[3];
	printf("%p\n",pa);
	printf("%p\n",pa + 1);
	printf("%p\n",pa + 2);
	printf("sizeof(int): %zu\n",sizeof(int));
	printf("sizeof(int *): %zu\n",sizeof(int *));
}
