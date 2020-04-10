/*
Assignment code that deletes each character in s1 that matches any character in the string s2
*/

#include <stdio.h>

//Prototype of squeeze function
void squeeze(char *str1, char *str2);

//Main function
int main()
{
	char choice;

	do
	{
		//Declaration of string[size]
		char str1[100], str2[100];
		
		//Prompt the user to enter the 1st string
		printf("Enter 1st string:  ");

		//Read the string " %[^\n]s " is used to read string with space 
		scanf("%[^\n]s", str1);

		//fgets(str1, sizeof(str1), stdin);
		
		//To clear the input buffer
		while(getchar() != '\n');

		//Prompt the user to enter the 2nd string
		printf("Enter 2nd string:  ");

		//Read the string " %[^\n]s " is used to read string with space 
		scanf("%[^\n]s",str2);

		//fgets(str2, sizeof(str2), stdin);
		
		//Function call
		squeeze(str1,str2);
		
		//Print the string after modifications
		puts("\nSqueeze string: ");
		printf("%s\n", str1);

		//Prompt to user to for another run
		printf("\nDo you want to continue.\nPress Y/y(yes) or any other key to exit: ");

		//read the choice
		scanf(" %c", &choice);

		//To clear the input buffer
		while(getchar() != '\n');

	}while('Y' == choice || 'y' == choice);

	return 0;
}

//Definition of squeeze function
void squeeze(char *str1, char *str2)
{
	//Declaration and initialization of pointer to base address of strings
	char *p1 = str1, *p2 = str2;

	//Declaration of variables
	//Char variable to store single character from 2nd string
	char character;

	// int variable to hold the index of matched character in 1st string
	int match_position = 0;
	
	//int variable to transverse through string
	int shift_count;

	//First while loop to transverse through 2nd string character by character
	while(*p2 != '\0')
	{
		//Initialize character variable to single character of 2nd string 
		character = *p2;

		//Second while loop to transverse through 1st string 
		while ( *p1 != '\0')
		{
			
			//Compare each character and if equal enter inside to remove it
			if( *p1 == character )
			{
				for (shift_count = match_position; str1[shift_count]; shift_count++)
				{
					str1[shift_count] = str1[shift_count + 1];
				}

			}

			//if compared characters are not same increment the index and address by one
			else
			{
				match_position++;
				p1++;
			}
		}

		//Set p1 pointer again to base address of 1st string to again start comparison from first character
		p1 = str1;

		//set index again to zero to start comparison of another character from 2nd string 
		match_position = 0;

		//Increment p2 pointer to point to next character of 2nd string
		p2++;
	}
}
