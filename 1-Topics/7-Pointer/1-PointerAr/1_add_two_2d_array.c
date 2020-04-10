#include <stdio.h>
#define ROW 2
#define COL 2
void populate( int (*p)[COL]);
void print( int (*p)[COL]);
int ( * add (int (*a)[COL], int (*b)[COL]))[COL];
int main()
{
	//Delcare two 2D Array
	int a[ROW][COL],b[ROW][COL];
	
	//Populate the 1st array
	printf("Populate the 1st array:\n");
	populate(a);

	//Polulate the 2nd array
	printf("Populate the 2st array:\n");
	populate(b);
	
	//Function call to add two array and store in 3rd array
	int (*r)[COL] = add(a,b);
	
	//print 1st array
	printf("1st Array\n");

	//function call to print array 
	print(a);

	//print 2nd array
	printf("2st Array\n");

	//function call to print array 
	print(b);

	//result of the addition
	printf("Result of addition of two 2D Array\n");

	//function call to print array 
	print(r);

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
int ( * add (int (*a)[COL], int (*b)[COL]))[COL]
{
	static int r[ROW][COL];
	int i,j;
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			r[i][j] = a[i][j] + b[i][j];
		}
	}

	return r;
	
}
