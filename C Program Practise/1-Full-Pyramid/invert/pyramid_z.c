/*
 
 123456789
  1234567
   12345
    123
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
		printf("%d",j);	
		}
	printf("\n");
	}
return 0;
}
