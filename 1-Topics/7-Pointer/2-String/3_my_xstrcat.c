#include <stdio.h>
#include <string.h>
void xstrcat (char *d, const char *s);
int main()
{
	char d[20] = "richard";
	char s[] = "purdie";
	
	xstrcat(d,s);
	printf("s: %s\n",s);
	printf("d: %s\n",d);

	return 0;
}
void xstrcat (char *d, const char *s )
{
	while(*d++);
	*--d = ' ';
	d++;
	while (*d++ = *s++);
}
