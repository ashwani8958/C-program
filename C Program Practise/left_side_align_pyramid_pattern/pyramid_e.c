
/* pattern is 
1(E)
0(O)	1(E)
1(E)	0(O)	1(E)
0(O)	1(E)	0(O)	1(E)
1(E)	0(O)	1(E)	0(O)	1(E)
*/
//O = ODD at this places i+j is odd
//E = EVEN at this places i+j is even
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
			if((i+j)%2==0)	
			printf("1\t");
			else
			printf("0\t");
		}//end of 2nd for loop
	printf("\n");
	}//end of first for loop
return 0;
}
