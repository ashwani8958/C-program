/*
Demo code to check whether the enter character is vowel or not
*/

#include <stdio.h>
int main()
{
	//Declaration of variables
	char ch;

	//prompt the user to enter the character
	printf("Enter the character: ");

	//Read the character
	scanf("%c", &ch);

	//check whether the entered character is a vowel or not
	if ( ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
	{
		switch (ch)
		{
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				printf("%c is a vowel\n", ch);
				break;
			default:
				printf("%c is not a vowel\n", ch);
		}
	}
	else
	{
		printf("%c is not a Alphabet\n", ch);
	}

	return 0;
}
