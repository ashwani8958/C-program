/*

*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *p, const void *q);
int main()
{
	double a[] = {5.2, 4.8, 3.8, 2.3, 1.33};
	int i ;
	double key = 2.3;

	double *p = bsearch(&key, a, sizeof(a) / sizeof(double), sizeof(double), compare);

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
	if ( *(double * )p < *(double * )q)
	{
		return -1;
	}
	else if ( *(double * )p > *(double * )q)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
