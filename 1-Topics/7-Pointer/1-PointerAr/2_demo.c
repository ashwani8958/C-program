
#include <stdio.h>
int main()
{
	int a[4] = {10, 20, 30, 40};
	int i;
	int *p = a;

	//Printing using the subscript notation
	for (i = 0; i < 4; i++)
	{
		printf("p[%d]: %d\t",i, p[i]);
	}

	printf("\n\n");

	//printing using the pointer notation
	for(i = 0; i < 4; i++)
	{
		printf("*(p + %d): %d\t", i, *(p + i));
	}

	printf("\n\n");

	//printing using pointer notation in reverse
	for(i = 0; i < 4; i++)
	{
		printf("*(%d + p): %d\t", i, *(i + p));
	}

	printf("\n\n");

	//printing using i[a]
	for(i = 0; i <4; i++)
	{
		printf("%d[p]: %d\t", i, i[p]);
	}

	printf("\n\n");

	for(i = 0; i < 4; i++)
	{
		printf("a[%d]: %d\t", i, *p);
		p++;
	}
	
	printf("\n\n");
	return 0;
}
