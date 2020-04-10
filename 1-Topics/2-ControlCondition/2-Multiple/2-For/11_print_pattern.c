/* pattern is

0
1 0
0 1 0
1 0 1 0
0 1 0 1 0

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
			if ( (row_count + print) % 2 == 0)
			{
				printf("0\t");
			}
			else
			{
				printf("1\t");
			}
		}
		printf("\n");
	}

	return 0;
}
