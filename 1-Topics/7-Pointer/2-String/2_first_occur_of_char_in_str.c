#include <stdio.h>
#include <string.h>
int find_index( char *string, char ch);
int main()
{
	int size;
	char ch;
	printf("Enter the size of string: ");
	scanf("%d", &size);

	char string[size + 1];

	printf("Enter the string: ");
	scanf("%s", string);

	printf("Enter the charcter that have to be found: ");
	scanf(" %c", &ch);

	int index;
	index = find_index(string, ch);
	printf("%s\n",string);
	printf("%c is present at %d\n", ch,index);

	return 0;
}
int find_index( char *string, char ch)
{
	int index;
	char *ptr = string;
	while (*ptr != ch)
	{
		ptr++;
	}

	return ptr - string;


}
