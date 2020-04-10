/*
Demo code to print the pattern
*
**
***
****
*****
*/

#include <stdio.h>
int main()
{
	//Declaration of variable
	int row, row_count, print;
	char ch;

	//prompt user to enter the number of rows in pattern
	printf("Enter the number of rows: ");

	//Read row
	scanf("%d", &row);

	//prompt user to enter the sp. character
	printf("Enter the sp. character: ");

	//Read the sp. character
	scanf(" %c", &ch);

	if (ch >= 33 && ch <= 126)
	{
		for(row_count = 1; row_count <= row; row_count++)
		{
			for(print = 1; print <= row_count; print++)
			{
				printf("%c ", ch);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Enter the valid sp.character\n");
	}

	return 0;
}
