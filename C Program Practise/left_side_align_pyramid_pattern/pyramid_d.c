
/* pattern is 
2
3	4
4	5	6
5	6	7	8
6	7	8	9	10
*/
//each row start with value of i+j and

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
		printf("%d\t",i+j);
		}//end of 2nd for loop
	printf("\n");
	}//end of first for loop
return 0;
}
