/*
Demo code to understand the strtok function
*/

#include <stdio.h>
#include <string.h>
char  *xstrtok (char *str, const char *delim);
int main()
{
	char string[] = "C is programming language";
	char *p = xstrtok(string, " ");

	printf("%s\n", p);
/*	
	p = xstrtok(NULL, " ");
	printf("%s\n", p);
	p = xstrtok(NULL, " ");
	printf("%s\n", p);
	p = xstrtok(NULL, " ");
	printf("%s\n", p);
	p = xstrtok(NULL, " ");
	printf("%s\n", p);
*/
	while (p = xstrtok(NULL, " "))
	{
		printf("%s\n",p);
	}

	return 0;
}

char  *xstrtok (char *str, const char *delim)
{
	static int len;
	static char *base;
	static char *temp;
	static char *initial_add;
	int flag = 0;

	if( str != NULL)
	{
		initial_add = str;
		len = strlen(str);
		base = str;
		temp = base;
	}
    
	if ( temp == initial_add + len )
	{
		return NULL;
	}

	base = temp;

	while ( *temp != '\0')
	{
		if (*temp != *delim)
		{
			temp++;
		}
		else
		{
			*temp = '\0';
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		temp++;
	}
	/*
	printf("temp: %p\n", temp);
	printf("base: %p\n", base);
	printf("*temp: %c\n", *temp);
	*/
	return base;
}
