/*
To check whether the given number is even or odd using bitwise operators
*/

#include <stdio.h>
int main()
{
	
	char option;
	do
	{
	//declare variables
	int num, flag = 0;
    unsigned mask = 1 << ((sizeof(int) << 3) - 1);
	//Enter the number
	printf("Enter the number");

	//read number
	scanf("%d", &num);


    //check whether number is even or odd using bitwise operators
	for ( ; mask; mask >>= 1)
	{
		if (num != (num | (~(~0 << 1))))
		{
			flag = 1;
			break;
		}	
	}

	if (flag == 1)
	{
		printf("%d is even number\n", num);
	}

	else
	{
		printf("%d is odd number\n", num);
	}

	printf("Want to continue ? press [Y/y]:");
	scanf("\n%c", &option);
	}
	while (option == 'Y' || option == 'y');
	return 0;
}
