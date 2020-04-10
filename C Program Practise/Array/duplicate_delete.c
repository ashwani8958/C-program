#include <stdio.h>
int main()
{
    int data[100],k,i,n,step,temp,new_size;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf("%d. Enter element: ",i+1);
        scanf("%d",&data[i]);
    }

//bubble sort
	for(step=0;step<n-1;++step)
	{
		for(i=0;i<n-step-1;++i)
		{
			if(data[i]>data[i+1])   // To sort in descending order, change > to < in this line. 
        		{
            			temp=data[i];
            			data[i]=data[i+1];
            			data[i+1]=temp;
        		}
    		}
	}
    
    printf("In ascending order: ");
    for(i=0;i<n;++i)
         printf("%d  ",data[i]);
    printf("\n");
/*
	for(step=n-1;step>=1;step--)
	{
		for(i=0;i<step;i++)
		{
			if(data[i]>data[i+1])
			{
				temp=data[i+1];
				data[i+1]=data[i];
				data[i]=temp;	
			}
		}
	}
*/

//delete duplicate
new_size=n;
	for(i=0;i<=new_size;i++)
	{
		if(data[i]=data[i+1])
		{
			for(k=i+1;k<=new_size;k++)
			{
				data[k+1]=data[k+2];
			}
		new_size--;
		}
	}

//print the array
    printf("In ascending order after deleting duplicates: ");
    for(i=0;i<new_size;++i)
         printf("%d  ",data[i]);
    printf("\n");
    return 0;
}
