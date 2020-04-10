#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[])
{
	int i, sum = 0;
	float avg;

	for(i = 0; argv[i]; i++)
	{
		sum = sum + atoi(argv[i]);
	}

	avg = (float)sum / (argc -1);

	printf("avg: %f\n", avg);

	return 0;
}

