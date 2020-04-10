/*
Demo Code to reverse the number
*/

#include <stdio.h>
int main()
{
	//Declaration of variable
	int num, rem, rev = 0, orginal_num;

	//Prompt the user to enter the number
	printf("Enter the number: ");

	//Read the number
	scanf("%d", &num);
	
	orginal_num = num;
	//Reverse the number
	while (num)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num =num / 10;
	}
	printf("Reverse of %d is %d\n", orginal_num,rev);

	return 0;
}
