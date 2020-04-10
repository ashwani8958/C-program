#include <stdio.h>
void modify( int **p, int n);
int main()
{
	int i, a = 10, b = 20, c = 30;
	int *arr[3] = {&a, &b, &c};
	modify(arr, 3);
	for(i = 0; i < 3; i++)
	{
		printf("%d\t", *arr[i]);
	}

	printf("\n");
	return 0;
}

void modify( int **p, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		**p = **p + 10;
		p++;
	}
}
