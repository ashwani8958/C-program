/*
Demo code to built the generic copy function
*/

#include <stdio.h>

//Function prototype
void generic_copy( void *s, void *d, size_t n);

int main()
{
	char a = 'A',b;
	generic_copy(&a, &b, sizeof(char)); //sizeof(DATE_TYPE) is required for setting the loop to copy byte by byte
	printf("a: %c\tb: %c\n",a, b);

	int c = 0x1a2b3c4d,d;
	generic_copy(&c, &d, sizeof(int));
	printf("c: %x\td: %x\n",c, d);

	double e = 12.25,f;
	generic_copy(&e, &f, sizeof(double));
	printf("e: %lf\tf: %lf\n",e, f);
	
	return 0;
}

//Function definition
void generic_copy(void *s, void *d, size_t n)//sizeof() operator return type is size_t
{
	int i;

	for(i = 0; i < n; i++)
	{
		*(char *)d = *(char *)s; // type cast is done for void pointer 'd' and 's' because they are of void type
		s = s + sizeof(char); //to copy byte by byte sizeof(char) is used
		d = d + sizeof(char);
	}
}
