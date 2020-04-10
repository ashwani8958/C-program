#include <stdio.h>
#include <string.h>
int xstrcmp( const char *s1, const char *s2);
int main()
{
	char str1[20];
	char str2[20];
	printf("Enter the 1st string(size < 20): ");
	scanf("%s", str1);

	printf("Enter the 2st string(size < 20): ");
	scanf("%s", str2);

	int val = xstrcmp(str1, str2);

	if ( val == 0 )
	{
		printf("str1 is equal to str2\n");
	}
	else if ( val == 1)
	{
		printf("str1 is not equal to str2\n");
	}
	else
	{
		printf("str1 length is not equal to str2\n");
	}

	return 0;
}

int xstrcmp( const char *s1, const char *s2)
{
	const char *str1 = s1;
	const char *str2 = s2;

	if( *str1++ == '\0' && *str2++ == '\0')
	{
		//--str1;
		//--str2;
		if (*s1++ == *s2++ )
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return -1;
	}
}
