/*
 
 555555555
  4444444
   33333
    222
     1

*/
#include<stdio.h>
int main(void)
{
int i,j,n;
printf("enter the number of line: ");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf(" ");
		}
		for(j=1;j<=2*(n-i)+1;j++)
		{
		printf("%d",n+1-i);
			/*
			      printf("%d",i);
				111111111
			 	 2222222
			  	  33333
			   	   444
			    	    5
			
			*/
				
		}
	printf("\n");
	}
return 0;
}
