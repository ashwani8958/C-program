#include <stdio.h>
#define SWAP(ch) ch = (ch >> 4 | ch << 4) 

int main()
{
	unsigned char ch = 0xAB;

	SWAP(ch);

	printf("%x\n", ch);

}
