#include <stdio.h>

int main()
{
	int a[5] = {-1,20,9,-89,7};
	int i,j,k,temp;
	

	for(i = 0;i < 5;i++)
	{
		k = i;
		for(j = i + 1; j < 5; )
		{
			if(a[k] < a[j])
			{
					temp = a[k];
					j++;
			}			
			else
			{
					j++;
					k++;
			}
		}
	}
	printf("temp: %d\t",temp);
	printf("\n");

	for(i = 0; i < 5; i++)
		printf("a[%d]: %d\t", i, a[i]);

	printf("\n");
	return 0;
}
