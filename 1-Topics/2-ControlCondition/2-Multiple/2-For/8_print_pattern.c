/* pattern is

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

#include <stdio.h>
int main()
{
	//Delcaration of variable
	int row, row_count, print;

	//prompt the user to enter the number of rows
	printf("enter the number of lines in pyramid: ");

	//Read the row
	scanf("%d",&row);

	for (row_count = 1; row_count <= row; row_count++)
	{
		for (print = 1; print <= row_count; print++)
		{
		printf("%d ", row_count);
		}
		printf("\n");
	}

	return 0;
}
