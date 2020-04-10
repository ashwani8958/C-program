/*
Demo code to bulid generic swap function
*/

#include <stdio.h>

//Function prototype
void generic_swap( void *s, void *d, size_t n);

int main()
{
	char a = 'A',b = 'B';
	generic_swap(&a, &b, sizeof(char));//sizeof(DATE_TYPE) is required for setting the loop to copy byte by byte
	int a[ROW][COL];
	printf("a: %c\tb: %c\n",a, b);

	int c = 0x1a2b3c4d,d = 0x11223344;;
	generic_swap(&c, &d, sizeof(int));
	printf("c: %x\td: %x\n",c, d);

	double e = 12.25,f = 24.32;
	generic_swap(&e, &f, sizeof(double));
	printf("e: %lf\tf: %lf\n",e, f);
	
	return 0;
}

void generic_swap(void *s, void *d, size_t n)//sizeof() operator return type is size_t

{
	int i,t;
	void *temp = &t;
	for(i = 0; i < n; i++)
	{
		*(char *)temp = *(char *)s;// type cast is done for void pointer 'd' and 's' because they are of void type
		*(char *)s = *(char *)d ; //to copy byte by byte sizeof(char) is used
		*(char *)d = *(char *)temp;
		s = s + sizeof(char);
		d = d + sizeof(char);
	}
}
