/*
Demo code to understand the strtok function
*/

#include <stdio.h>
#include <string.h>
int main()
{
	char string[] = "C is programming language";

	char *p = strtok(string, " ");

	printf("%s\n", p);

	while ( p = strtok(NULL, " "))
	{
		printf("%s\n",p);
	}
	return 0;
}
