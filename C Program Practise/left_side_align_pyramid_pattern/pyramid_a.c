
/* pattern is 
*
*	*
*	*	*
*	*	*	*
*	*	*	*	*
*	*	*	*	*	*
*/
#include<stdio.h>
int main(void)
{
int i,j,n;
printf("enter the number of lines in pyramid: ");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("*\t");
		}//end of 2nd for loop
	printf("\n");
	}//end of first for loop
return 0;
}
