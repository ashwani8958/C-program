/* pattern is

* * * * *
 * * * *
  * * *
   * *
    *

*/
#include<stdio.h>
int main(void)
{
	//Delcaration of variable
	int row, row_count, space, print;
	char ch; 

	//prompt the user to enter the number of rows
	printf("enter the number of lines in pyramid: ");

	//Read the row
	scanf("%d",&row);

	//Prompt the user to enter character to be printed in pattern
	printf("Enter the character: ");

	//Read the character
	scanf(" %c", &ch);

	if (ch >= 33 && ch <= 126)
	{
		for (row_count = 1; row_count <= row; row_count++)
		{
			//print spaces
			for (space = 1; space <= row_count; space++ )
			{
				printf(" ");
			}

			//print character
			for (print = row_count; print <= row; print++)
			{
				printf("%c ", ch);
			}

		printf("\n");
		}
	}
	else
	{
		printf("Enter valid character\n");
	}

	return 0;
}
