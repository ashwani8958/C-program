/*
Demo code to understand 2D Array
*/

#include <stdio.h>
#define ROW 3
#define COL 2

int main()
{
	//Declare 2D array
	int a[ROW][COL] = {1,2,
					   3,4,
					   5,6};
	
	//Declare variable for loop
	int i,j;

	//NORMAL NOTATION
	for(i = 0; i< ROW; i++)
	{
		for(j = 0 ;j < COL; j++)
		{
			printf("a[%d][%d]: %d\t",i, j, a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	//Declare POINTER TO ARRAY
	int (*p)[COL] = a;

	//NORMAL NOTATION USING POINTER VARIABLE
	for(i = 0; i< ROW; i++)
	{
		for(j = 0 ;j < COL; j++)
		{
			printf("a[%d][%d]: %d\t",i, j, p[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	//Using pointer Notation
	for(i = 0; i< ROW; i++)
	{
		for(j = 0 ;j < COL; j++)
		{
			printf("a[%d][%d]: %d\t",i, j, *( a[i] + j));
		}
		printf("\n");
	}
	printf("\n\n");

	//
	for(i = 0; i< ROW; i++)
	{
		for(j = 0 ;j < COL; j++)
		{
			printf("a[%d][%d]: %d\t",i, j, *(* (p + i) + j));
		}
		printf("\n");
	}
	printf("\n\n");

	//Printing using 
	for(i = 0; i< ROW; i++)
	{
		for(j = 0 ;j < COL; j++)
		{
			int *np = a[i];
			/*
			*np = a[i]/p[i]/ *(a + i)/ *(p + i)
			*/
			printf("a[%d][%d]: %d\t",i, j, *np);
			np++;
		}
		printf("\n");
	}
	printf("\n\n");
#if 0
	//Printing using 
	for(i = 0; i< ROW; i++,p++)
	{
		for(j = 0 ;j < COL; j++)
		{
			int *np = *p;
			/*
			*np = a[i]/p[i]/ *(a + i)/ *(p + i)
			*/
			printf("a[%d][%d]: %d\t",i, j, *np);
			np++;
		}
		printf("\n");
	}
	printf("\n\n");
#endif
	//
	for(i = 0; i< ROW; i++,p++)
	{
		for(j = 0 ;j < COL; j++)
		{
			int *np = (int *)p;
			/*
			*np = a[i]/p[i]/ *(a + i)/ *(p + i)
			*/
			printf("a[%d][%d]: %d\t",i, j, *np);
			np++;
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}

