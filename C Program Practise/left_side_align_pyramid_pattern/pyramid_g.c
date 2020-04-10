
/* pattern is 
5
5	4
5	4	3
5	4	3	2
5	4	3	2	1
*/
#include<stdio.h>
int main(void)
{
int i,j,n;
printf("enter the number of lines in pyramid: ");
scanf("%d",&n);
//int p=5;(wrong)
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		//int p=5; (will set value of p =5 in each iteration result in printing the pyramid of 5)
		//printf("%d\t",p--);
		printf("%d\t",n+1-j);
		}//end of 2nd for loop
	printf("\n");
	}//end of first for loop
return 0;
}
