#include  <stdio.h>

int main()
{
int  i , j , n , t , rt_sh , x[50] ;

printf("Enter the number of elements: ") ;
scanf("%d" , &n) ;
	for(i=0 ; i<n ; i++)
  	{
		printf("%d.Enter the elements: ",i+1) ;
    		scanf("%d" , &x[i]) ;
	}

printf("Enter the number of time you want to shift right: ");
scanf("%d", &rt_sh);

//print the orginial array
printf("Original array is as shown: \n") ;
	for(i=0 ; i<n ; i++)
	{
		printf("%d " , x[i]) ;
	}
printf("\n") ;

/* shifting array elements */

	for(i=0;i<rt_sh;i++)
	{  
	t=x[n-1] ;
		for(j=n-1 ; j>=0 ; j--)
		{
			x[j+1]=x[j] ;
		}
	x[0]=t ;
	}

//print the shifted array
printf("New array is as shown: \n") ;
for(i=0 ; i<n ; i++)
printf("%d " , x[i]) ;
printf("\n");
return 0; 
}
