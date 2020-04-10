/*
Assignment - To replace each strings of one or more blanks by a single blank
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Declare variable
	char choice;
	do
	{
		//Declare variable
		int c, last_char;
		
		//prompt the user to enter the string
		printf("Please enter a string with multi blanks\n");	

		//Initializing the last character with a non space value
		last_char = ' ';
		
		//Read the character till EOF is received
		while ((c = getchar()) != '\n')
		{
			//Checking if the character is space
			if (c == 9 || c == 32)
			{
				//Checking if the last character is not space
				if (last_char != ' ')
				{
					//Then printf
					putchar(c);
				}
			}
			//If the character is not space then print
			else
			{
				putchar(c);
			}
			//Update the last character with the current character
			last_char = c;
		}

		//Ask user for continuation
		printf("\nDo you want to continue\nPress y/Y(yes): ");

		//read the choice
		scanf("\n%c", &choice);

		while(getchar() != '\n');
	}while('Y'== choice || 'y' == choice);
	
	return 0;
}
