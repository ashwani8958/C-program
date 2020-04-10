#include <stdio.h>
#include <stdlib.h>
void print_array(int *iptr, int num);
void populate(int *ptr, int num);
void bubble_sort(int *ptr, int num);
int main()
{
	int i, size, *iptr;

	//prompt the user to enter the size of array
	printf("Enter the size of array: ");

	//read the size
	scanf("%d", &size);

	iptr = malloc(size * sizeof(int));
	printf("*iptr: %x\n", *iptr);
	printf("iptr: %p\n", iptr);

	if(iptr == NULL)
	{
		perror("malloc");
		return -1;
	}
	
	populate(iptr, size);
//	bubble_sort(iptr, size);
	print_array(iptr, size);

	return 0;
}
void populate( int *ptr, int num)
{
	//Declare the variable
	int i; 
	          
	printf("*ptr: %x\n", *ptr);
	printf("ptr: %p\n", ptr);
	//Populate the error
	for(i = 0; i < num; i++)
	{   
	         scanf("%d", &ptr[i] );
	}   
}
void print_array( int *iptr, int num)
{
	int i;

	for(i = 0; i < num; i++)
	{
		printf("%d\t", *(iptr + i));
	}

	printf("\n");

}
