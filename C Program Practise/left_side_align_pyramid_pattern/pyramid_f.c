/* pattern is 
1
2	3
4	5	6
7	8	9	10
11	12	13	14	15
*/

#include<stdio.h>
int main(void)
{
int i,j,n,p=1;
printf("enter the number of lines in pyramid: ");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d\t",p++);
		}//end of 2nd for loop
	printf("\n");
	}//end of first for loop
return 0;
}
