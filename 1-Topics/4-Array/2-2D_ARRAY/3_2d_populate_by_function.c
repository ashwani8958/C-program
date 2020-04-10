/*
Demo code to understand 2D Array
*/

#include <stdio.h>
#define ROW 3
#define COL 2
int ( * populate (void))[COL];
void print(int(*p)[COL]);
int main()
{

	//Call function to populate the array
	int (*p)[COL] = populate();

	//call function to print the array
	print(p);

	return 0;
}
int (*populate(void))[COL]
{
	//Declare 2D array
	static int a[ROW][COL];
	//Declare the variable
	int i ,j;
	
	//Populate the error
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			scanf("%d", ( a[i] + j));
		}
	}

	return a;
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
