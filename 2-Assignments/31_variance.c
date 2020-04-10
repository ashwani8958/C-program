/*
Program to find variance
*/
#include <stdio.h>
#include <stdlib.h>

//Function declaration
int average(int **p, int col);
void to_get_d(int avge, int row, int col, int **p);
float sum(int **p, int row, int col);

int main()
{
	//Decalaration of variables
	int i, j, row, col, avge;
	float sum_1, variance, result;
    int **p;
    char ch;

    do
	{
		//Prompt the user to enter no. of rows
		printf("Enter no. of rows : ");

		//Read the no. of rows
		scanf("%d", &row);
		p = (int **)malloc(row * sizeof(int *));

		for (i = 0; i < 1; i++)
		{
			printf("Enter no. of cols : ");
			scanf("%d", &col);
			p[i] = (int *)malloc(col * sizeof(int));
			for (j = 0; j < col; j++)
			{
				scanf("%d", (p[i] + j));
			}
		}

		for (i = 1; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				p[i] = (int *)malloc(col * sizeof(int));
			}
		}

		avge = average(p, col);
		to_get_d(avge, row, col, p);
		result = sum(p,  row, col);
		variance = (result / col);
		printf("Variance = %f\n", variance);

		//Prompt the user to continue or not
		printf("Do you want to continue. Press (y / n) : ");
		scanf("\n%c", &ch);
	}while ('y' == ch);

}

//funtion to calculate average
int average(int **p, int col)
{
	int i, j, average;
	float sum = 0;
	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < col; j++)
		{
			sum = sum + p[i][j];
		}
	}
	average = (sum / col);
	printf("avg = %d\n", average);
	printf("\n");
	return average;
}

//function to get d
void to_get_d(int avge, int row, int col, int **p)
{
	int i, j;
	for (i = 1; i < (row - 1); i++)
	{
		for (j = 0; j < col; j++)
		{
			p[i][j] = p[0][j] - avge;
			printf("p[%d][%d] = %d\n", i, j, p[i][j]);

		}
	}
	printf("\n");
}

//function for sum of array
float sum(int **p, int row, int col)
{
	int i, j;
	float sum_1;
	for (i = 2; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			p[i][j] = p[1][j] * p[1][j];
			printf("p[%d][%d] = %d\n", i, j, p[i][j]);
			sum_1 = (float)sum_1 + p[i][j];
		}
	}
	printf("sum_1 = %f\n", sum_1);
	return sum_1;
}


