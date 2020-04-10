#include <stdio.h>
int count = 0;

char *my_strstr( char *s1,  char *s2);
int main()
{
	char s1[] = "anything";
	char s2[] = "thin";

	char *p = my_strstr(s1,s2);
	int i;
	for(i = 0; i < count;i++)
	{
		printf("%c\n", *p);
		p++;
	}
}

char *my_strstr( char *s1,  char *s2)
{
	int flag = 1;
	char *p;
	
	while(*s2 != '\0')
	{
		if(*s2 == *s1++)
		{
			count++;
			if(flag = 1)
			{
				p = s1;
				flag = 0;
			}
		return p;
		}
	}

}
