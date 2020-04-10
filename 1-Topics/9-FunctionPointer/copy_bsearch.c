/*

*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *p, const void *q);
int main()
{
	int a[] = {5, 4, 3, 2, 1};
	int i ;
	int key = 2;
	qsort(a, sizeof(a) / sizeof(int), sizeof(int), compare);
	int *p = bsearch(&key, a, sizeof(a) / sizeof(int), sizeof(int), compare);

	if(p == NULL)
	{
		printf("Key not found\n");
	}
	else
	{
		printf("Key found\n");
	}

	return 0;
}
int compare(const void *p, const void *q)
{
	if ( *(int * )p < *(int * )q)
	{
		return -1;
	}
	else if ( *(int * )p > *(int * )q)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
