/*
Assignment - To implement a function read_int that would
			 read an integer number without usig the scanf() function
*/

#include <stdio.h>
#define STORAGE 255

int read_int(char *word);
int isdigit(int var);

int main()
{
	//Declaration of variables go here
	int c;
	int i;
	char option;
	
	do
	{
		//Clearing the buffer before storing a number
		char s[STORAGE] = {0};
		
		//Prompt the user to enter the value of the number
		printf("Enter the number\n");
		
		//Reading the value using the read_int function
		read_int(s);
		
		//Print the value stored in the buffer array s
		printf("The value entered by the user is %s\n", s);
		
		//Prompt the user for continuation
		printf("Please press [Y/y] to continue or any other key to exit\n");
		scanf("\n%c", &option);
		
		//Using getchar() to remove the newline character

		if (option == 'y' || option == 'Y')
		{
			getchar();
			continue;
		}
		else
		{
			break;
		}
	} while (1);

	return 0;
}

int read_int(char *word)
{
	int i;
	int ch;
	word[0] = '0';
	
	
	for (i = 0; ((ch = getchar()) != '\n'); i++)
	{
		//Check for negative value
		if (ch == '-')
		{
			//If the first character is negative put a negative sign in the first element of the buffer and increment i++
			word[0] = '-';
			i++;
			ch = getchar();
		}
		
		if (isdigit(ch))
		{
			//Continue reading the digits and storing them in the buffer array
			word[i] = ch;
		}
	}
	 
	return 0;
}

int isdigit(int var)
{
	if ((var >= '0' && var <= '9'))
	{
		return 1;
	}
	
	return 0;
}
