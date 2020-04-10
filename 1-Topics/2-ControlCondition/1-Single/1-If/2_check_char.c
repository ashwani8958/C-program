/*
Demo code to whether the given character is Digit, alphabet or special character.
*/

#include <stdio.h>

int main()
{
	//Declaration of variables
	char ch;

	//prompt user to enter the character
	printf("Enter the Character: ");

	//Read the character
	scanf("%c", &ch);

	//check whether the entered character is digit, alphabet or special character.
	if (ch >= 33 && ch <= 47)
	{
		printf("%c: is a special character\n", ch);
	}
	if (ch >= 48 && ch <=57)
	{
		printf("%c: is digit\n", ch);
	}
	if (ch >= 65 && ch <= 90 || ch >= 93 && ch <= 122)
	{
		printf("%c: is Alphabet\n", ch);
	}

	return 0;
}
