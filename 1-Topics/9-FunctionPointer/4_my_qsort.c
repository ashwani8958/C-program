/*

*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *p, const void *q);
int main()
{
	float a[] = {5.2, 4.8, 3.8, 2.3, 1.33};
	int i ;

	qsort(a, sizeof(a) / sizeof(float), sizeof(float), compare);

	for(i = 0; i < 5; i++)
	{
		printf("%.2f\t", a[i]);
	}

	printf("\n");
	return 0;
}
int compare(const void *p, const void *q)
{
	if ( *(float * )p < *(float * )q)
	{
		return -1;
	}
	else if ( *(float * )p > *(float * )q)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
