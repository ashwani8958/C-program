/*
Demo code to find the average of 'N' natural number
*/

#include <stdio.h>
int main()
{
	//Declaration of variable
	int num, i, sum = 0;
	float average;

	//prompt the user
	printf("Enter the number: ");

	//read the value of num
	scanf("%d", &num);

	for( i = 1; i <= num; i++)
	{
		sum = sum + i;
	}

	//calculate the average
	average = (float)sum / num; 
	
	//print the average of 1st N natural number
	printf("Average of first %d is %.3f\n", num,average);

	return 0;
}
