/*
 work as wc command
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

//Function prototypes
void count(int *line, int *word, int *byte);

/*
 To access CLA
*/
int main( int argc, char *argv[]) 
{
	//Declaration of variables
	char *lwb[]={"-l","-w","-m","-c"};
	int i;
	int byte =0, word =0, line=0;
	
	/*
	Calling function to get 
	count of all parameters
	*/
	count(&line, &word, &byte);	
	
	/*
	 if no arg passed other than 
	 a.out
	*/
	if (argc == 1)
	{
		printf("\t%d", line);
		printf("\t%d", word);
		printf("\t%d", byte);
	}
	/*
	 if arg passed, check for existing 
	 strings with arguments and print 
	 it accord to that
	*/
	else
	{
		for ( i =1; i < argc; i++)
		{
			if(strcmp(argv[i],lwb[0]) == 0)
				printf("\tline -->%d", line);
			else if(strcmp(argv[i],lwb[1]) == 0 )
				printf("\tword -->%d", word);
			else if(strcmp(argv[i],lwb[2]) == 0 )
				printf("\tbyte -->%d", byte);
			else if(strcmp(argv[i],lwb[3]) == 0 )
				printf("\tcharacter -->%d", byte);
			else
				printf("%s:No such file exists",argv[i]);
		}
	}
	printf("\n");
	
}

/*
Three parameters passed via refer
*/
void count(int *line, int *word, int *byte)
{
	char a;
	int flag =1;
	
	/*
	 Get from bufer until
	*/
	while( (a=getchar()) != EOF)
	{
		//For line count
		if( a == '\n')
		{
			flag =1;
			(*line)++;
		}
		/*
		For word count and flag set 
		for identify non printable between
		characters
		*/
		else if (( isprint(a) != 0 ) && (flag != 0) && isblank(a) == 0 ) 
		{	
			flag = 0;
			(*word)++;
		}

		//Inorder for printable
		else if (isgraph(a) == 0)
			flag = 1;

		(*byte)++;
	}
}
