#include <stdio.h>

void populate(int *ptr, int row, int col);
void print(int *ptr, int row, int col);

int main()
{
	int row,col;

	printf("Enter row: ");
	scanf("%d", &row);

	printf("Enter column: ");
	scanf("%d", &col);

	int mat[row][col];

	populate((int *)mat,row,col);
	print((int *)mat,row,col);
	return 0;
}

void populate(int *ptr, int row, int col)
{
	int i, j;

	for(i = 0; i < row; i++ )
	{
		for(j = 0; j < col; j++)
		{
			scanf("%d", ((ptr + i * col)+j));
		}
	}
}

void print(int *ptr, int row, int col)
{
	int i,j;

	for(i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("a[%d][%d]: %d\t", i, j, *((ptr + i * col)+ j));
		}
		printf("\n");
	}
	printf("\n");
}
