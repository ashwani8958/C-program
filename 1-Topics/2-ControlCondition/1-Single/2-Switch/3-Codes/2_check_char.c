/*
Code for checking whether the input character is upper case character, lower case character or digit
*/

#include <stdio.h>
int main()
{
	//declaration of variable
	char ch;

	//prompt the user to enter the character 
	printf("Enter the character: ");

	//Read the character 
	scanf("%c", &ch);

	//check the conditions
	switch (ch)
	{
		case 'A'...'Z':
			printf("%c is a upper case\n", ch);
			break;
		case 'a'...'z':
			printf("%c is a lower case\n", ch);
			break;
		case '0'...'9':
			printf("%c is a digit\n", ch);
			break;
		default:
			printf("%c not a upper case, lower case or digit\n", ch);
	}
	
	return 0;
}
