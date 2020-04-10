#include<stdio.h>
int main()
{
int i,j,k,l,d;
for(i=5;i>=1;i--)
{
	for(l=1;l<=10-i;l++)
		printf("%d ",l);
	d=5;
	for(k=1;k<=2*(5-i);k++)
	{
		printf(" ");
		d++;
	}
	for(j=10-i;j>=1;j--)
		printf("%d ",j);
printf("\n");
}
printf("\n");
return 0;
}	
