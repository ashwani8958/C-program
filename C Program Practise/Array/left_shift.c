#include  <stdio.h>

int main()
{
int  i , j , n , t , lf_sh , x[50] ;

printf("Enter the number of elements: ") ;
scanf("%d" , &n) ;
	for(i=0 ; i<n ; i++)
  	{
		printf("%d.Enter the elements: ",i+1) ;
    		scanf("%d" , &x[i]) ;
	}

printf("Enter the number of time you want to shift left: ");
scanf("%d", &lf_sh);

printf("Original array is as shown: \n") ;
	for(i=0 ; i<n ; i++)
	{
		printf("%d " , x[i]) ;
	}
printf("\n") ;

/* shifting array elements */
	for(i=0;i<lf_sh;i++)
	{  
	t=x[0] ;
		for(j=0 ; j<=n-1 ; j++)
		{
			x[j]=x[j+1] ;
		}
	x[n-1]=t ;
	}
printf("New array is as shown: \n") ;
for(i=0 ; i<n ; i++)
printf("%d " , x[i]) ;
printf("\n");
return 0; 
}
