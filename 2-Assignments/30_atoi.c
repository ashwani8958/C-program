/*
Assignment - To implement atoi(), itoa() and getword() functions
*/

#include <stdio.h>
#include <string.h>


//Defining the function prototypes
int atoi(const char *s);
void itoa(int num, char *p);
int reverse_array(char *a);
int getword(char *word);

int main()
{
	//Declaration of the variables go here
	int select;
	char option;
	int count;
	int num;
	int num2;
	char number[10];
	char string[10];
	char word[50];	

	
	do{

		//Prompt the user to enter the choice
		printf("Select from the menu\n1.atoi()\n2.itoa()\n3.getword()\n");
		printf("Enter choice: ");
		scanf("%d", &select);
		
		switch (select)
		
		{			
			case 1:
					//prompt the user to enter the string
					printf("Enter a numeric string: ");

					//read the enter string
					scanf("%s", number);

					//function call
					num = atoi(number);

					//print the number
					printf("String to integer is %d\n", num);
					break;
					
			case 2: 

					//prompt the user to enter the number
					printf("Enter a number: ");

					//read the enter number
					scanf("%d", &num2);

					//function call
					itoa(num2,string);

					//loop is used to clear the input buffer so that do-while loop can work
					while(getchar() != '\n');
					
					//print the string
					printf("Integer to string is %s\n", string);
					break;

			case 3:
					//read the string till new line(Enter)
					while ((getchar()) != '\n');

					printf("Enter the string: ");
					count = getword(word);

					printf("Enter string is: %s\n", word);
					printf("The word count is: %d\n", count);
					break;

			default: printf("Invalid Choice entered\n");
					 break;
					
		}

		//Prompt the user for continuation
		printf("Please press [Y/y] to continue or any other key to exit\n");
		scanf(" %c", &option);
	  } while (option == 'Y' || option == 'y');
	  
	  return 0;
}


int atoi(const char *s)
{
	int num = 0;
	int digit;
	while (*s)
	{
	if (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		num = num * 10 + digit;
		s++;
	}
	else
	{
		return num;
	}
}
return num;
}

void itoa(int num, char *p)
{
	int digit;	
	char *base = p;
	while(num)
	{
		int	digit = num % 10;
		*p = digit + '0';
		p++;
		num = num / 10;
	}
	*p='\0';
	reverse_array(base);

}

int reverse_array(char *a)
{
	int i,temp;
	int j = strlen(a)-1;
	for(i = 0; i < j ; i++,j--)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

int getword(char *word)
{
	char *p = word;
	char ch;
	int count = 0;
	
	while (ch != '\n')
	{
		ch = getchar();
		*word = ch;
		word++;
	}

	 word--;
	 *word = '\0';

	while (*p != ' ')
	{
		count++;
		p++;
	}
	return count;
}
