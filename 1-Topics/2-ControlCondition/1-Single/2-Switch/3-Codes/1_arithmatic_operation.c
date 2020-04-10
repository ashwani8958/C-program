/*
Demo code for arithmetic calculator
*/

#include <stdio.h>
int main()
{
	//Declaration of variable
	float num1,num2;
	int flag = 0;
	float result;
	char ch;

/*
	//Prompt the user to enter the oprator
	printf("Enter the oprator: ");

	//Read the oprator
	scanf("%c", &ch);
*/

	//Prompt the user to enter the 1st number
	printf("Enter the 1st number: ");

	//Read the 1st number
	scanf("%f", &num1);

	//Prompt the user to enter the 1st number
	printf("Enter the 2nd number: ");

	//Read the 2nd number
	scanf("%f", &num2);

	//Prompt the user to enter the operator
	printf("Enter the operator: ");

	//Read the operator
	scanf("\n%c", &ch);

	switch (ch)
	{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		default:
			printf("Enter the valid operator\n");
			flag = 1;
			return 1;
	}
	if (flag == 0)
	{
		printf("%f %c %f = %f\n", num1,ch,num2,result);
	}

	return 0;
}
