
/* pattern is

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/
#include<stdio.h>
int main(void)
{
int i,j,n;
printf("enter number of line: ");
scanf("%d",&n);
	for(i=1;i<=n;i++)/*loop for number of lines*/
	{
		for(j=1;j<=n-i;j++) /*loop for printing space*/
		{
		printf(" ");
		}// 2nd loop
		for(j=1;j<=i;j++)/*loop for printing stars*/
		{
		printf("%d ",j);
		} //3rd loop
	printf("\n");
	}// 1st loop
return 0;
}
