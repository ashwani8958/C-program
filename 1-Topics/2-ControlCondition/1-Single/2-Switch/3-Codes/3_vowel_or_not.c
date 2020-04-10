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
				printf("%c is a vowel\n", ch);
				break;
			case 'a':
				printf("%c is a vowel\n", ch);
				break;
			case 'E':
				printf("%c is a vowel\n", ch);
				break;
			case 'e':
				printf("%c is a vowel\n", ch);
				break;
			case 'I':
				printf("%c is a vowel\n", ch);
				break;
			case 'i':
				printf("%c is a vowel\n", ch);
				break;
			case 'O':
				printf("%c is a vowel\n", ch);
				break;
			case 'o':
				printf("%c is a vowel\n", ch);
				break;
			case 'U':
				printf("%c is a vowel\n", ch);
				break;
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
