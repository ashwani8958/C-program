/* pattern is

*****
****
***
**
*

*/
#include<stdio.h>
int main(void)
{
	//Delcaration of variable
	int row,row_count,print;
	char ch; 

	//prompt the user to enter the number of rows
	printf("enter the number of lines in pyramid: ");

	//Read the row
	scanf("%d",&row);

	//Prompt the user to enter character to be printed in pattern
	printf("Enter the character: ");

	//Read the character
	scanf(" %c", &ch);

	if (ch >= 33 && ch <= 47)
	{
		for(row_count = 1; row_count <= row; row_count++)
		{
			//print character
			for(print = row; print >= row_count; print--)
			{
				printf("%c ", ch);
			}//end of 2nd for loop

		printf("\n");
		}//end of first for loop
	}
	else
	{
		printf("Enter valid character\n");
	}

	return 0;
}
