#include <stdio.h>
#include <string.h>
size_t xstrlen(char *s);
int main()
{
	size_t len;
	char name[] = "purdie";
	len = xstrlen(name);
	printf("Length : %zu\n",len);
	return 0;
}
size_t xstrlen(char *s)
{
	char *p = s;
	while (*p++);
	
	return p - s - 1;
}
