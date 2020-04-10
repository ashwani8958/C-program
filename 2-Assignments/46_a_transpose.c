/*
Assignment code to find determinant
*/


#include<stdio.h>

//Declare global array and variable
int a[20][20],m;

//Function prototype
int determinant(int f[20][20],int a);

//Main Function
int main()
{
	//Declare varibale
	int i,j;

	//Prompt user to enter the order of matrix
    printf("\n\nEnter order of matrix : ");
	scanf("%d",&m);

	//Populate the matrix
	printf("\nEnter the elements of matrix\n");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
	    {
			printf("a[%d][%d] = ",i,j);
	        scanf("%d",&a[i][j]);
	    }
	}

	//Print the entered matrix
	printf("\n\n---------- Matrix A is --------------\n");    
	for(i=1;i<=m;i++)
	{
		printf("\n");
	    for(j=1;j<=m;j++)
	    {     
			printf("\t%d \t",a[i][j]);
	    }
	}

	printf("\n");

	//Print the determinant
	printf("\n Determinant of Matrix A is %d\n",determinant(a,m));
}

//Function Definition
int determinant(int f[20][20],int x)
{
	//Declare variables
	int pr,c[20],d=0,b[20][20],j,p,q,t;

	//If size of matrix is two
	if(x == 2)
	{
		d = 0;
	    d = (f[1][1] * f[2][2]) - (f[1][2] * f[2][1]);
	    return(d);
	}

	//if size is greater than two
	else
	{
		for(j = 1; j <= x; j++)
	    {        
			int r = 1,s = 1;
	    	for(p = 1; p <= x; p++)
	    	{
				for(q = 1; q <= x; q++)
	    	  	{
					if(p != 1 && q != j)
	    	  	    {
						b[r][s] = f[p][q];
	    	  	        s++;
	    	  	        if(s > x-1)
	    	  	        {
							r++;
	    	  	            s = 1;
	    	  	        }
	    	  	    }
	    	  	}
	    	}

	    	for(t = 1, pr = 1; t <= (1 + j); t++)
	    		//Change sign
	    	    pr = (-1) * pr;

	    	//store the determinant of sub matrix in c[j]
	    	c[j] = pr * determinant(b,x-1);
	  }
	  for(j=1, d=0; j <= x; j++)
	  {
		  d = d + (f[1][j] * c[j]);
	  }
	  return(d);
	}
}
