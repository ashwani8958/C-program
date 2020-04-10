#include <stdio.h>
int main()
{
    int data[100],k,i,n,j,step,temp,new_size;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf("%d. Enter element: ",i+1);
        scanf("%d",&data[i]);
    }

//print the entered array    
    printf("Entered array: ");
    for(i=0;i<n;i++)
         printf("%d  ",data[i]);
    printf("\n");

//delete duplicate
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<n; )
		{
			if(data[j]=data[i])
			{
				for(k=i+1;k<n;k++)
				{
					data[k]=data[k+1];
				}
			n--;
			}
			else
				j++;
		}
	}

//print the array
    printf("In ascending order after deleting duplicates: ");
    for(i=0;i<n;++i)
         printf("%d  ",data[i]);
    printf("\n");
    return 0;
}
