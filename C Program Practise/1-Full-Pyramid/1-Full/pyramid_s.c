/* pattern is

    1
   222
  33333
 4444444
555555555

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
		for(j=1;j<=2*i-1;j++)/*loop for printing stars*/
		{
		printf("%d",i);
		} //3rd loop
	printf("\n");
	}// 1st loop
return 0;
}
