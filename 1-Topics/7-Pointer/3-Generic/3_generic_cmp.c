/*
Demo code to bulid generic compare function 
*/

#include <stdio.h>
#define EQUAL  1
#define NOT_EQUAL  0
int generic_cmp( void *s, void *d, size_t n);
int main()
{
#if 0
	char a = 'A',b = 'B';
	//int res = generic_cmp(&a, &b, sizeof(char));
	//printf("a: %c\tb: %c\n",a, b);

	int c = 0x1a2b3c4d,d = 0x11223344;;
	//int res = generic_cmp(&c, &d, sizeof(int));
	//printf("c: %x\td: %x\n",c, d);
#endif

	double e = 12.25,f = 12.45;
	if( generic_cmp(&e, &f, sizeof(double)) == EQUAL)
	{
		printf("e: %lf\tf: %lf\n",e, f);
	}
	else
	{
		printf("not equal\n");
	}
	return 0;
}

int generic_cmp(void *s, void *d, size_t n)
{
	int i,t;
	//void *temp = &t;
	for(i = 0; i < n; i++)
	{
		if (*(char *)s != *(char *)d )
		{
			return NOT_EQUAL;
		}
			s = s + sizeof(char);
			d = d + sizeof(char);
	}
	return EQUAL;
}
