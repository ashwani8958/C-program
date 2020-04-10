/* pattern is

15
14 13
12 11 10
9  8  7  6 
5  4  3  2 1
*/

#include <stdio.h>
int main()
{
	//Delcaration of variable
	int row, row_count, print;
	int num;

	//prompt the user to enter the number of rows
	printf("enter the number of lines in pyramid: ");

	//Read the row
	scanf("%d",&row);

	//initilization of variable to be printed
	num = (row * (row + 1)) / 2;

	for (row_count = 1; row_count <= row; row_count++)
	{
		for (print = 1; print <= row_count; print++)
		{
		printf("%d\t", num);
		num--;
		}
		printf("\n");
	}

	return 0;
}
