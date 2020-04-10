
#include <stdio.h>
int main()
{
	int a[4] = {10, 20, 30, 40};
	int i,temp;
	int *p = a;
	int *q = a + 3;

	//Printing using the subscript notation
	for (i = 0; i < 4; i++)
	{
		printf("a[%d]: %d\t",i, a[i]);
	}

	printf("\n\n");

	//reverse the array
	for( ; p < q; p++,q--)
	{
		temp = *p;
		*p = *q;
		*q = temp;
	}

	//Printing using the subscript notation
	for (i = 0; i < 4; i++)
	{
		printf("a[%d]: %d\t",i, a[i]);
	}

	printf("\n\n");
	
	return 0;
}
