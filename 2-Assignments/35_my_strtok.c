/*
Code to understand the strtok function
*/

#include <stdio.h>
#include <string.h>

//Function prototype
char  *xstrtok (char *str, const char *delim);

int main()
{
	//Declare variable for do while loop
	char choice;

	do
	{
	
	//Declare the string 
	char string[100];
	
	//Prompt the user to enter string
	printf("Enter the String to generate tokens: ");

	//Read the string 
	scanf("%[^\n]s", string);
	
	//Function call
	char *p = xstrtok(string, " ");

	printf("%s\n", p);

	while (p = xstrtok(NULL, " "))
	{
		printf("%s\n",p);
	}

	//Prompt to enter to continue or not
	printf("\n\nDo you want to continue?\nPress Y/y(yes) or any another key to exit: ");

	//Read the choice
	scanf(" %c", &choice);

	//Clear the input buffer
	while(getchar() != '\n');

	}while('Y' == choice || 'y' == choice);
	return 0;
}

//Function Definition
char  *xstrtok (char *str, const char *delim)
{
	//Declare variable
	static int len;
	int flag = 0;

	//Declare pointer variable
	static char *base;
	static char *temp;
	static char *initial_add;

	//Condition will true only 1st time when function called
	if( str != NULL)
	{
		initial_add = str;
		len = strlen(str);
		base = str;
		temp = base;
	}
    
    //Condition will be true when temp had reached last of string
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

	return base;
}
