#include <stdio.h>
#include <string.h>
void xstrcpy (char *d, const char *s);
int main()
{
	char s[] = "Purdie";
	char d[10];

	xstrcpy(d,s);
	printf("s: %s\n",s);
	printf("d: %s\n",d);
	
	return 0;
}
void xstrcpy(char *d, const char *s)
{
	while(*d++ = *s++);
}
