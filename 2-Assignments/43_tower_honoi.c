/*
Assignment code to solve tower of hanoi problem using recursion
*/

#include <stdio.h>

// Function prototype
void tofh(int ndisk, char source, char temp, char dest);

//Main function
int main()
{
	//Declare variable
	char choice;

	do
	{
		//Declare varible
		char source = 'A', temp = 'B', dest = 'C';
		int ndisk;
		
		//Prompt user to enter the number of disk to be arranged
		printf("\nEnter the number of disk: ");

		//Read the number of disk 
		scanf("%d", &ndisk);
		
		//Print the sequence of movement between three pillar
		printf("Sequence is : \n");
		
		//Function call
		tofh(ndisk, source, temp, dest);
		
		//prompt the for continuation
		printf("\nDo you want to continue.\nPress Y/y(yes) or any other key to exit: ");
		
		//Read the choice
		scanf("\n%c", &choice);
	}while('Y' == choice || 'y' == choice);

	return 0;
}

//Definition of Function
void tofh(int ndisk, char source, char temp, char dest)
{
	if (ndisk == 0)
	{
		printf("Enter the number of disk greater than zero\n");
		return;
	}
	if (ndisk == 1)
	{
		printf("Move Disk %d from %c --> %c\n", ndisk, source, dest);
		return;
	}

	tofh(ndisk - 1, source, dest, temp);
	printf("Move Disk %d from %c --> %c\n", ndisk, source, dest);
	tofh(ndisk - 1, temp, source, dest);

}
