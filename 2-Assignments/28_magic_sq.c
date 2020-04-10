/*
Assignment code to create magic square
*/
#include <stdio.h>

int main() 
{
	//Declare character variable
	char choice;

	do
	{

		// Introductory message
		printf("This program creates a magic sqaure of a specified size.\n");
		printf("The size must be an odd number between 1 and 99.\n");

		// Get the users magic number and allocate to int n
		int size;
		printf("Enter size of magic square: ");
		scanf("%d", &size);

		if ( 0 != size % 2)
		{

			// Create the array (not using VLA)
			int magic[99][99];
			int start = (size / 2); // The middle column
			int max = size * size; // The final number
			magic[0][start] = 1; // Place the number one in the middle of row 0

			// Loop to start placing numbers in the magic square
			int row;
			int col;
			int next_row;
			int next_col;
			int value;

			for (value = 2, row = 0, col = start; value < max + 1; value++) 
			{
				if ((row - 1) < 0) 
				{
					// If going up one will leave the top
					next_row = size - 1; // Go to the bottom row
				}
				else 
				{
					next_row = row - 1; 
				} // Otherwise go up one
				

				if ((col + 1) > (size - 1)) 
				{ 
					// If column will leave the side
					next_col = 0; // Wrap to first column
				}
				else 
				{
					next_col = col + 1; 
				} // Otherwise go over one                     
				
				if (magic[next_row][next_col] > 0) 
				{
					// If that position is taken         
						next_row = row + 1; // Go to the row below
						next_col = col; // But stay in same column
				}                                                                   
				row = next_row;                                                 
				col = next_col;                                                 
				magic[row][col] = value; // Put the current value in that position      
			}                                                               
			// Now print the array                                        
			int magic_row, magic_col;                                                              
			for (magic_row = 0; magic_row < size; magic_row++) 
			{                                                     
				for (magic_col = 0; magic_col < size; magic_col++) 
				{                                                 
					printf("%4d", magic[magic_row][magic_col]);                             
				}                                                               
				printf("\n");                                                       
			}
		}
		else
		{
			printf("Enter the size in odd number\n");
		}

		//Prompt the use to continue or not
		printf("Do you want to continue\nPress Y/y(yes) or any other key to exit: ");

		//read the choice 
		scanf(" %c", &choice);
	}while('Y' == choice || 'y' == choice);

        return 0;                                                       
}
