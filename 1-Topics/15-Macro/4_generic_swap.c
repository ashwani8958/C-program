#include <stdio.h>
#define GENERIC_SWAP(a,b,type) {	  type t;\
									  t = a;\
									  a = b;\
									  b = t;\
								}

int main()
{
	int a = 5, b = 9;
	printf("Before swap\na: %d\tb: %d\n",a ,b);
	GENERIC_SWAP(a,b,int);
	printf("After swap\na: %d\tb: %d\n",a ,b);

	float c = 5.9, d =89.6;
	printf("Before swap\nc: %f\td: %f\n",c ,d);
	GENERIC_SWAP(c,d,float);
	printf("After swap\nc: %f\td: %f\n",c ,d);

	char e = 'a', f = 'r';
	printf("Before swap\ne: %c\tf: %c\n",e ,f);
	GENERIC_SWAP(e,f,char);
	printf("After swap\ne: %c\tf: %c\n",e ,f);
	
	return 0;

}
