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
	if ( ch >= 65 && ch <= 90 || ch >= 93 && ch <= 122)
	{
		if ( ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
		{
			printf("%c is a vowel\n", ch);
		}
		else
		{
			printf("%c is not a vowel\n", ch);
		}
	}
	else
	{
		printf("Enter character is not a Alphabet\n");
	}
}
