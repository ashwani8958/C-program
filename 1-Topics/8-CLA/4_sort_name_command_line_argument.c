/*
Demo code to sort the array enter through command line argument
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	//Declare the variable for loop
	int i,j;
	char *temp;


	for (i = 1; i < (argc - 1); i++)
	{
		for(j = 1; j < (argc -1); j++)
		{
			if(strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
		}
	}

	for(i = 1; i < argc; i++)
	{
		printf("%s",argv[i]);
	}
	
	printf("\n");
	
}
