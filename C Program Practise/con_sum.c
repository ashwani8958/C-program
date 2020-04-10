#include<stdio.h>
int main()
{
int num,sum=0;
printf("enter the number = ");
scanf("%d",&num);
sum=sum+num;
	while(num!=0)
	{
	printf("enter the no = ");
	scanf("%d",&num);
	sum=sum+num;
	}
printf("sum = %d",sum);
return 0;
}
