#include <stdio.h>

int a[20][20];
void populate(int *ptr, int row, int col);
void print(int *ptr, int row, int col);
void multiply(int *ptr1, int *ptr2, int *ptr3, int row1, int col1, int col2);
void transpose(int *ptr1, int *ptr2, int row, int col);
int determinant(int b[20][20], int row);
void cofactor(int *ptr1, int *ptr2, int p, int q, int n);
int main()
{
	char choice;
	
	do
	{

	int option, det;
	int row1, row2, col1, col2, i, j, k;
	
	printf("Assignment code to find Multiplcation of two matix, transpose and determinant\n\n");
	printf("Choose from given options\n1. Matrix Multiplcation\n2. Find transpose\n3. Find determinant\n");
	printf("Enter your choice: ");
	scanf("%d", &option);

	switch(option)
	{
		case 1:
		{

			printf("Enter the number of Row in 1st matrix: ");
			scanf("%d", &row1);
			printf("Enter the number of column in 1st matrix: ");
			scanf("%d", &col1);

			printf("Enter the number of Row in 2st matrix: ");
			scanf("%d", &row2);
			printf("Enter the number of column in 2st matrix: ");
			scanf("%d", &col2);
			
			if( col1 != row2)
			{
				printf("\nMatrix multiplcation is not possible as column of 1st matrix is not equal to row of 2nd matrix\n\n");
				
				break;
			}

			int mat1[row1][col1], mat2[row2][col2], mat3[row1][col2];
			printf("\nEnter items in 1st array\n\n");
			populate((int *)mat1, row1, col1);
			printf("\nEnter items in 2st array\n\n");
			populate((int *)mat2, row2, col2);

			print((int *)mat1, row1, col1);
			print((int *)mat2, row2, col2);

			multiply((int *)mat1, (int *)mat2, (int *)mat3, row1, col1, col2);
			print((int *)mat3, row1, col2);
			break;
		}
		case 2:
		{
			printf("Enter the number of Row in 1st matrix: ");
			scanf("%d", &row1);
			printf("Enter the number of column in 1st matrix: ");
			scanf("%d", &col1);
			int mat1[row1][col1], mat2[col1][row1];
			populate((int *)mat1, row1, col1);
			transpose((int *)mat1, (int *)mat2, row1, col1);
			print((int *)mat1, row1, col1);
			print((int *)mat2, col1, row1);
			break;
		}
		case 3:
		{
			printf("Enter the size of matrix: ");
			scanf("%d", &row1);
			int mat1[row1][row1];
			populate((int *)mat1, row1, row1);
			print((int *)mat1, row1, row1);
			
			det = determinant(mat1, row1);
			printf("Determinant: %d\n", det);
			
			break;
		}
		default:
		{
			puts("Choose from given option only");
		}
	}
	
	getchar();
	printf("Do you want to continue.\nPress Y/y(yes) or any other key to exit: ");

	scanf(" %c", &choice);

	}while('Y' == choice || 'y' == choice);

	return 0;
}

void populate(int *ptr, int row, int col)
{
	int i, j;

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("Enter the mat[%d][%d] item in array: ", i, j);
			scanf("%d", ((ptr + i * col) + j));
		}
	}
}

void print(int *ptr, int row, int col)
{
	int i, j;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%d\t",*((ptr + i * col) + j));
		}
		printf("\n");
	}
	printf("\n");
}

void multiply(int *ptr1, int *ptr2, int *ptr3, int row1, int col1, int col2)
{
	int i, j, k;

	//Multiplcation of matrix
	for(i = 0; i < row1; i++)
	{
		for(j = 0; j < col2; j++)
		{
			*((ptr3 + i * col2) + j) = 0;
			for(k = 0; k < col1; k++)
			{
				*((ptr3 + i * col2) + j) += *((ptr1 + i * col1) + k) * *((ptr2 + k * col2) + j);
			}
		}
	}
}

void transpose(int *ptr1, int *ptr2, int row, int col)
{
	int i, j;

	//Transpose
	for(i = 0; i < col; i++)
	{
		for(j = 0; j < row; j++)
		{
			*((ptr2 + i * row) + j) = *((ptr1 + j*col) + i);
		}
	}

}

int determinant(int f[20][20], int row)
{
	//initialize result
	int d, pr, c[20],b[20][20],j,p,q,t;

	//Base case if matrix contain's single element
	if(row == 1)
	{
		return f[0][0];
	}

	else if(row == 2)
	{
		d = (f[1][1] * f[2][2]) - (f[1][2]*f[2][1]);
		return d; 
	}

	else
	{
		for( j = 1; j <= row; j++)
		{
			int r = 1, s = 1;
			for(p = 1; p <= row; p++)
			{
				for( q = 1; q <= row; q++)
				{
					if(p != 1 && q != j)
					{
						b[r][s] = f[p][q];
						s++;
						if( s > row - 1)
						{
							r++;
							s = 1;
						}
					}
				}
			}
			for( t = 1, pr = 1; t <= (j + 1); t++)
				pr = -1 * pr;
			

			c[j] = pr * determinant(b,row - 1);
		}

		for(j = 1, d = 0; j <= row;j++)
		{
			d = d + (f[1][j] * c[j]);
		}
	return d;
	}
}
#if 0
	//Determinate of matrix

	int det = 0;
	for(i = 0; i < row1; i++)
	{
		det = det + (mat1[0][i] * (mat1[1][(i+1)%3] * mat1[2][(i+2)%3] - mat1[1][(i+2)%3] * mat1[2][(i+1)%3]));

	}

	printf("Determinate of  1st matrix: %d\n", det);

	return 0;
}

#endif
