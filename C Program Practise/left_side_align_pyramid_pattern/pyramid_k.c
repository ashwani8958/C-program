/* pattern is 
1	2	3	4	5
1	2	3	4
1	2	3
1	2	
1
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
		printf("%d\t",j);
		}//end of 2nd for loop
	printf("\n");
	}//end of first for loop
return 0;
}
