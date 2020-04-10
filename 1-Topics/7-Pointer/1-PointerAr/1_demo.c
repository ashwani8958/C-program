
#include <stdio.h>
int main()
{
	int a[4] = {10, 20, 30, 40};
	int i;

	//Printing using the subscript notation
	for (i = 0; i < 4; i++)
	{
		printf("a[%d]: %d\t",i, a[i]);
	}

	printf("\n\n");

	//printing using the pointer notation
	for(i = 0; i < 4; i++)
	{
		printf("*(a + %d): %d\t", i, *(a + i));
	}

	printf("\n\n");

	//printing using pointer notation in reverse
	for(i = 0; i < 4; i++)
	{
		printf("*(%d + a): %d\t", i, *(i + a));
	}

	printf("\n\n");

	//printing using i[a]
	for(i = 0; i <4; i++)
	{
		printf("%d[a]: %d\t", i, i[a]);
	}

	printf("\n\n");

	return 0;
}
