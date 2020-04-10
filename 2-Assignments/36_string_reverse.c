/*

Assignment 36 : To read and print a string in reverse order without storing in array using recuursive or non-recursive method.

*/
#include <stdio.h>
#include <string.h>

void rev_str(char *, char *);
void rev_str_rec(char *, char *, int);

int main()
{
	//Declare variables
	char str[80];
	char option;
	int repeat = 1;

	do
	{
		//Get the string
		printf("Enter a string to reverse : ");

		scanf("\n%[^\n]s", str);

		char rev[80] = {'\0'};

		//Display the reversed string
		rev_str(str, rev);

		printf("Non-recursive method : %s\n", rev);
		
		putchar('\n');

		rev_str_rec(str, rev, 0);

		printf("Recursive method : %s\n", rev);

		putchar('\n');

		//Prompt the user to repeat
		printf("Do you want to repeat? (y/n) : ");

		scanf("\n%c", &option);

		getchar();
	} while (option == 'Y' || option == 'y');

	return 0;
}

void rev_str_rec(char *str, char *rev_str, int n)
{
	//Declare the variables
	int size = strlen(str);

	//Check if the next character is first character or not
	if (n != size)
	{
		rev_str[size - n - 1] = str[n];
		rev_str_rec(str, rev_str, ++n);
	}

}

void rev_str(char *str, char *rev_str)
{
	//Declare variables
	int size = strlen(str);
	printf("Length = %d\n", size);
	int i;

	for (i = 0; i < size; i++)
	{
		rev_str[size - i - 1] = str[i]; 
	}
}
