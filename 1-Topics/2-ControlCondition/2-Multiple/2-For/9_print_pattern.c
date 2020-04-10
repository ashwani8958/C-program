/* pattern is

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include <stdio.h>
int main()
{
	//Delcaration of variable
	int row, row_count, print;
	int num = 1;

	//prompt the user to enter the number of rows
	printf("enter the number of lines in pyramid: ");

	//Read the row
	scanf("%d",&row);

	for (row_count = 1; row_count <= row; row_count++)
	{
		for (print = 1; print <= row_count; print++)
		{
		printf("%d ", num);
		num++;
		}
		printf("\n");
	}

	return 0;
}
