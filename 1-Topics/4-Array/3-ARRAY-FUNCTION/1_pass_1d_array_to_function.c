#include <stdio.h>
void func(int *p);
int main()
{
	int i, arr[5] = {3, 6, 5 ,1, 7};
	func(arr);
	printf("Inside main(): ");
	for(i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}
void func(int *p)
{
	int i;
	printf("Inside func(): ");
	for(i = 0; i < 5; i++,p++)
	{
		*p = *p + 2;
		printf("%d ", *p);
	}

	printf("\n");
}
