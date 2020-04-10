/* pattern is 
5	4	3	2	1
5	4	3	2
5	4	3
5	4
5
*/
#include<stdio.h>
int main(void)
{
int i,j,n;
printf("enter the number of lines in pyramid: ");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
		printf("%d\t",n+1-j);
		}//end of 2nd for loop
	printf("\n");
	}//end of first for loop
return 0;
}
