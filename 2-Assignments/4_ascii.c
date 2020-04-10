/*
Assignment code for printing the ascii table
*/

#include <stdio.h>
int main()
{
	//Declaration of variable
	int num;
	
	//Print Dec, Oct, Hex and char in the first line of table
	printf("Dec\tOct\tHex\tChar\n");

	for (num = 0; num <= 127; num++)
	{
		if (num >= 0 && num <= 31 || num == 127)
		{
			printf("%d\t%o\t%x\tNot Printable\n", num,num,num);
		}
		else
		{
			printf("%d\t%o\t%x\t%c\n", num,num,num,num);
		}
	}

	return 0;
}
