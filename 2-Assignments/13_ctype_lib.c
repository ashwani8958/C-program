/*
Requirements : To implement a c-type library with the following functionalities : 
			   isalnum()
			   isalpha()
			   isdigit()
			   isupper()
			   islower()
			   isprint()
			   ispunct()
			   isspace()
			   isgraph()
			   isxdigit()
			   isascii()
			   isblank()
*/

#include <stdio.h>

//Declaring the function prototypes
int isalnum(int var);
int isalpha(int var);
int isdigit(int var);
int isupper(int var);
int islower(int var);
int isprint(int var);
int ispunct(int var);
int isspace(int var);
int isgraph(int var);
int isxdigit(int var);
int isascii(int var);
int isblank(int var);
int iscntrl(int var);


//Defining the driver function
int main()
{
	//Declaration of the variables go here
	char ch;
	char option;
	int select;
	
	do{
		//Prompt the user to enter the character
		printf("Please enter the character: ");
		scanf("\n%c", &ch);
		
		//Prompt the user to select a choice from the menu
		printf("\nSelect a choice\n1.isalnum()\n2.isalpha()\n3.isascii()\n4.isblank()\n5.iscntrl()\n6.isdigit()\n7.isgraph()\n8.islower()\n9.isprint()\n10.ispunct()\n11.isspace()\n12.isupper()\n13.isxdigit()\n");
		printf("Enter your choice: ");

		//Read the option
		scanf("%d", &select);
		
		switch (select)
		{
			case 1: 
					isalnum(ch) ? printf("The given character is alphanumeric\n"):printf("The given character is not alphanumeric\n");
					break;
			
			case 2:
					isalpha(ch) ? printf("The given character is alphabet\n"):printf("The given character is not alphabet\n");
					break;
					
			case 3:
					isascii(ch) ? printf("The given character is within ascii\n"):printf("The given character is not within ascii\n");
					break;
					
			case 4:
					isblank(ch) ? printf("The given character is blank\n"):printf("The given character is not blank\n");
					break;
					
			case 5:
					iscntrl(ch) ? printf("The given character is a control character\n"):printf("The given character is not a control character\n");
					break;
					
			case 6:
					isdigit(ch) ? printf("The given character is digit\n"):printf("The given character is not digit\n");
					break;
					
			case 7:
					isgraph(ch) ? printf("The given character is a graphical character\n"):printf("The given character is not a graphical character\n");
					break;
					
			case 8:
					islower(ch) ? printf("The given character is lowercase\n"):printf("The given character is not lowercase\n");
					break;
					
			case 9:
					isprint(ch) ? printf("The given character is printable\n"):printf("The given character is not printable\n");
					break;
			
			case 10:
					ispunct(ch) ? printf("The given character is punctuation\n"):printf("The given character is not punctuation\n");
					break;
					
			case 11:
					isspace(ch) ? printf("The given character is space\n"):printf("The given character is not space\n");
					break;
					
			case 12:
					isupper(ch) ? printf("The given character is uppercase\n"):printf("The given character is not uppercase\n");
					break;
					
			case 13:
					isxdigit(ch) ? printf("The given character is a hex digit\n"):printf("The given character is not a hex digit\n");
					break;
					
			default:
					printf("Incorrect Choice Entered\n");
		}
		
		//Prompt the user for continuation
		printf("\nDo you want to continue? Please press [Y/y] to continue: ");

		//Read the choice
		scanf(" %c", &option);
	} while (option == 'Y' || option == 'y');
	
	return 0;
}

//Definition of the functions
int isalnum(int var)
{
	if( (var >= 'a' && var <= 'z') || (var >= 'A' && var <= 'Z') || (var >= '0' && var <= '9') )
	{
		return 1;
	}
	return 0;
}
int isalpha(int var)
{
	if( (var >= 65 && var <= 90) || (var >= 97 && var <= 122) )
	{
		return 1;
	}
	return 0;
}
int isdigit(int var)
{
	if( (var >= '0' && var <= '9') )
	{
		return 1;
	}
	return 0;
}

int isupper(int var)
{
	if( (var >= 65 && var <= 90) )
	{
		return 1;
	}
	return 0;
}

int islower(int var)
{
	if( (var >= 97 && var <= 122) )
	{
		return 1;
	}
	return 0;
}

int isprint(int var)
{
	if( (var >= 0 && var <= 31) || (var == 127) )
	{
		return 0;
	}
	return 1;
}

int isspace(int var)
{
	if( (var >= 9 && var <= 13) || (var == 32) )
	{
		return 1;
	}
	return 0;
}

int ispunct(int var)
{
	if( (var >= 33 && var <= 47) || (var >= 58 && var <= 64) || (var >= 91 && var <= 96) || (var >= 123 && var <= 126) )
	{
		return 1;
	}
	return 0;
}

int isxdigit(int var)
{

	if( (var >= 'a' && var <= 'f') || (var >= 'A' && var <= 'F') || (var >= '0' && var <= '9') )
	{
		return 1;
	}
	return 0;

}

int isascii(int var)
{
	if( (var >= 0 && var <= 127) )
	{
		return 1;
	}
	return 0;
}

int isblank(int var)
{
	if( (var == 9) || (var == 32) )
	{
		return 1;
	}
	return 0;
}

int iscntrl(int var)
{
	if( (var >= 0 && var <= 31) || (var == 127) )
	{
		return 1;
	}
	return 0;
}

int isgraph(int var)
{
	if( (var >= 'a' && var <= 'z') || (var >= 'A' && var <= 'Z') || (var >= '0' && var <= '9') || ispunct )
	{
		return 1;
	}
	return 0;
}
