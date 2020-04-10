#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 15000

int main( int argc, char *argv[], char *envp[])
{
	int i, array[20], n, number[MAXLEN];
	float avg, sum = 0.0;
	int choice, count = 0;
	char *arr;
	const char str[2] = " ";
	char *token;
	printf("Enter the choice: 1-Normal avg\n2-Command line argument\n3-Environment variable arguments\n");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
		      printf("Enter the number of array\n");
		      scanf("%d", &n);
		      for (i = 0; i < n; i++)
			  {
			  	  scanf("%d", &array[i]);
			  }
			  for (i = 0; i < n; i++)
			  {
			  	  sum = sum + array[i];
			  }
			  avg = sum / n;

			  printf("%f\n", avg);
			  break;

	     case 2:
	          for(i = 0; argv[i]; i++)
	          {
		          sum = sum + atoi(argv[i]);
	          }

	          avg = (float)sum / (argc -1);
              printf("avg: %f\n", avg);
              break;
         
          case 3:
                printf("From shell export a variable which contain numbers. export arr = 1 2 3 4 \n");
                arr = getenv("ARR");

                printf("Arr =  %s\n", arr);

                token = strtok(arr, str);

                while (token != NULL)
				{
					count++;

					number[count] = atoi(token);
					//printf();

					sum = sum + number[count];

					token = strtok(NULL, str);
				}
				avg = sum / count;

				printf("Avg = %f\n", avg);
				break;


	}

	

	return 0;
}

