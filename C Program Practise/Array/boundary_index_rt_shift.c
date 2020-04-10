#include  <stdio.h>

int main()
{
int  i , j , n , t , rt_sh , x[50] ;
int b=3,index=1;
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
	t=x[b] ;
		for(j=b ; j>=index ; j--)
		{
			x[j]=x[j-1] ;
		}
	x[index]=t ;
	}

//print the shifted array
printf("New array is as shown: \n") ;
for(i=0 ; i<n ; i++)
printf("%d " , x[i]) ;
printf("\n");
return 0; 
}
