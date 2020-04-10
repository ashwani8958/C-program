/*
Assignment - To take two inputs n and k (1 <= k <= 10). The objective is to generate consecutive NRPS of length n using k distinct characters
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#define MAXLEN 255  //8-Bit ASCII 2^8 possible characters

//Declaring the prototype for the function
void generate_NRPS_string(char *str, int len, int k, int num);

int main()
{
	//Declaration of the variables go here
	int k,n,i,j;
	int num;
	char distinct_char[MAXLEN];
	//Prompt the user to enter the value of n and read it
	printf("Please enter the length of the nrps string\n");
	scanf("%d", &n);
	
	//Prompt the user to enter the value of k and read it
	printf("Please enter the the number of distinct characters for nrps (1 to 9)\n");
	scanf("%d", &k);

	//Error cehcking for k
	if (k < 1 || k > 10)
	{
		printf("Invalid range for k. Please Retry\n");
		return 1;
	}
	
	//Prompt the user to enter the distinct characters
	printf("Enter %d distinct characters\n", k);
	
	//Read the characters
	for (i = 0; i < k; i++)
	{
		scanf("\n%c", &distinct_char[i]);
	}
	
	//Check for the uniqueness of the character entered
	for (i = 0; i < k; i++ )
	{
		for (j = i + 1; j < k; j++)
		{
			if (distinct_char[j] == distinct_char[i])
			{
				printf("Values are not unique\n");
				return 1;
			}
		}
	}

	//Prompt the user to enter the number of nrps strings wanted and read it
	printf("Please enter the number of nrps strings\n");
	scanf("%d", &num);
	
	//Calling the function the generate NRPS strings
	generate_NRPS_string(distinct_char,n,k,num);
	return 0;
	
}

void generate_NRPS_string(char *str, int len, int k,int num)
{
    int i, val = 0, count = 0,j;
    
	for (j = 0; j < num; j++)
	{
		for (i = 0; i < len; i++)
			{
				if(i%k == 0 && i != 0)
				{
					val++;  //Generate the string if i % k == 0 
				}
					printf("%c", *(str+((i+val)%k)));
			}
				printf("\n");
	}
				printf("\n");
    
}
