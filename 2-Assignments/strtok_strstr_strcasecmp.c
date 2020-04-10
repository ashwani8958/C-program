/*
Assginment - Program to implement my_strtok(), my_strstr() and my_strcasecmp() functions
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Defining the function prototypes
char *my_strtok(char *str, const char *delim);
char* my_strstr(char *str1, char *str2);
int my_strcasecmp(const char *s1, const char *s2);

int main()
{
	char opt;
	do
	{
	//Declaration of variables go here
    char strtok_string[32];	
	char strtok_delim[32];
	
	char strstr_string1[32];
	char strstr_string2[32];
	
	char strcasecmp_string1[32];
	char strcasecmp_string2[32];
	
	int select;
	
	printf("\nEnter a choice\n1.my_strtok()\n2.my_strstr()\n3.my_strcasecmp()\n");
		scanf("%d", &select);
		
		switch (select)
		{
			case 1 : 
			getchar();
			printf("Enter the string: ");
			scanf("%[^\n]s", strtok_string);

			
			getchar();			
			printf("Enter the delimiter : ");
			scanf("%[^\n]s", strtok_delim);
			
			char *p = my_strtok(strtok_string, strtok_delim);
		printf("%s\n",p);	
			while (p = my_strtok(NULL, strtok_delim))
			{
				printf("%s\n",p);
			}
			break;
			
			case 2:
			getchar();
			printf("Enter the first string : ");
			scanf("%[^\n^]s", strstr_string1);	

			getchar();
			printf("Enter the second string: ");
			scanf("%[^\n^]s", strstr_string2);
			
			printf("%s \n", my_strstr(strstr_string1,strstr_string2));
			
			break;
			
			case 3:
			getchar();
			printf("Enter the first string: ");
			scanf("%[^\n^]s", strcasecmp_string1);
			
		    getchar();
			printf("Enter the second string: ");
			scanf("%[^\n^]s", strcasecmp_string2);
			
			int status = my_strcasecmp(strcasecmp_string1, strcasecmp_string2);

	        if (status == 0)
			{
				printf("Both the strings are equal\n");
			}
			else if(status > 0)
			{
				printf("String 1 is greater than String 2\n");
			}
			else
			{
				printf("String 2 is greater than String 1\n");
			}
			break;
			
			default:
					printf("Invalid choice entered\n");
			
		}
		printf("Enter y if u want to continue:\n");
		scanf("\n%c",&opt);
		}while(opt == 'y');
	
	
	return 0;
}

char *my_strtok(char *str, const char *delim)
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
    
	if ( temp == initial_add + len)
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

	return base;
}

char* my_strstr(char *str1, char *str2)
{
	while (*str1)
	{
		char *begin = str1;
		char *pattern = str2;

		//If the first Character of str2 matches
		while (*str1 && *pattern && *str1 == *pattern)
		{
			str1++;
			pattern++;
		}

		//If complete str2 matches return starting address
		if (! *pattern)
			{
			return begin;
			}
			str1 = begin + 1;  //Increment main string
	}
		return NULL;
}

int my_strcasecmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{	
		//Converting both the strings to uppercase 
		if (toupper(*s1) && toupper(*s2))
		{
			//Incrementing the pointers
			s1++;
			s2++;
		}
		else
		//Returning the difference in the length of the strings
		return (*s1 - *s2);
	}

	return (*s1 - *s2);
}



