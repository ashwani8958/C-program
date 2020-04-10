#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void memory_alloc(char **ptr, int total_strings);
void populate(char **ptr, int total_strings);
void sort_string(char **ptr, int total_strings);
void print_string(char **ptr,int total_strings);

int main()
{
	int total_strings;

	printf("Enter the total number of strings: ");
	scanf("%d", &total_strings);

	char **ptr = malloc((total_strings) * sizeof(char));
	//int *size_each_string = malloc(total_string * sizeof(int *));
	
	memory_alloc(ptr, total_strings);
	populate(ptr, total_strings);
	sort_string(ptr, total_strings);
	print_string(ptr,total_strings);

	return 0;
}
void memory_alloc(char **ptr, int n)
{
	int i,size;

	for(i = 0; i < n; i++)
	{
		printf("Enter the of size of %d string: ", i + 1);
		scanf("%d", &size);
		ptr[i] = malloc((size + 1) * sizeof(char *));
	}
}

void populate(char **ptr, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Enter the %d string: ", i + 1);
		scanf("%s", ptr[i]);
	}
}

void sort_string(char **ptr, int n)
{
	int i, j;
	char *temp;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(strcmp(ptr[j], ptr[j + 1]) > 0)
			{
				temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
}

void print_string(char **ptr, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%s\n", ptr[i]);
	}
}
