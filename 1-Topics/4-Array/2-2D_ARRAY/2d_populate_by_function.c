/*
Demo code to understand 2D Array
*/

#include <stdio.h>
#define ROW 3
#define COL 2
void populate( int (*p)[COL]);
void print(int(*p)[COL]);
int main()
{
	//Declare 2D array
	int a[ROW][COL];

	//Call function to populate the array
	populate(a);

	//call function to print the array
	print(a);

	return 0;
}
void populate( int (*p)[COL])
{
	//Declare the variable
	int i ,j;
	
	//Populate the error
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			scanf("%d", ( p[i] + j));
		}
	}
}
void print( int (*p)[COL])
{
	//Declare the variable
	int i,j;

	//NORMAL NOTATION
	for(i = 0; i< ROW; i++)
	{
		for(j = 0 ;j < COL; j++)
		{
			printf("a[%d][%d]: %d\t",i, j, p[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

}
