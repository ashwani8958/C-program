#include <stdio.h>
#include <string.h>
int main()
{
	size_t len;
	char name[] = "purdie";
	len = strlen(name);
	printf("Length : %zu\n",len);
	return 0;
}
