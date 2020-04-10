/*
Assignment code to print AP, GP and HP
	num1 = First number
	com_diff  = Common difference(AP & HP), Common ratio(GP)
	num_of_term  = number of terms
*/

#include <stdio.h>
int main()
{
	//Declaration of varible
	int num1;
	int com_diff;
	int num_of_term;
	int ap;
	int gp;
	float hp;
	int i;
	char choice;

	do
	{
		//Prompt the user to enter the 1st term
		printf("Enter the first term of series: ");

		//Read the first term
		scanf("%d", &num1);

		//prompt the user to enter the common difference(AP, HP) or common ratio(GP)
		printf("Enter the value of common difference/ratio: ");

		//Read the value of common difference or common ratio
		scanf("%d", &com_diff);

		//prompt the user to enter total numbers of terms
		printf("Enter the numbers of terms: ");

		//Read the value of total number of terms
		scanf("%d", &num_of_term);

		if ( num1 > 0 && com_diff > 0 && num_of_term > 0 )
		{
			if ( num1 <= 1048576 )
			{

				ap = num1;
				gp = num1;

				//Print AP 
				printf("\nAP of %d terms with %d as 1st term and %d as commom difference:\n\n", num_of_term,num1,com_diff);
				for ( i = 0; i < num_of_term; i++)
				{
					printf("%d\t", ap);
					ap = ap + com_diff;
				}

				//Print GP
				printf("\n\nGP of %d terms with %d as 1st term and %d as commom ratio:\n\n", num_of_term,num1,com_diff);
				for ( i = 0 ; i < num_of_term; i++)
				{
					printf("%d\t", gp);
					gp = gp * com_diff;
				}

				//Print HP
				printf("\n\nHP of %d terms with %d as 1st term and %d as commom ratio:\n\n", num_of_term,num1,com_diff);
				hp = 1 / (float)num1;
				for ( i = 0; i < num_of_term; i++)
				{
					printf("%f\t", hp);
					hp = 1 / ( hp + com_diff);
				}
			}
			else
			{
				printf("\nInvaild Inputs.out of range");
			}
		}
		else
		{
			printf("\nInvalid inputs. Enter only positive value");
		}

		//Prompt to enter choice to continue or not
		printf("\n\nDo you want to continue?\nPress Y/y(yes) or to exit press any key: ");

		//Read the choice 
		scanf(" %c", &choice);

	}while ( choice == 'Y' || choice == 'y');

		return 0;
}
