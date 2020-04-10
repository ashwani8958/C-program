/*
 Generic binary search for all basic data types
*/


#include <stdio.h>
#include <stdlib.h>

#define NOT_FOUND -1

#define ALLOCATE(n,p,type)\
			p = malloc (n * sizeof(type *))\

#define POPULATE(n,p,type,FORMAT)\
			for(i =0 ; i< n; i++)\
			{\
				scanf(FORMAT, (type *)p);\
				p = (type*)p + 1;\
			}\
			p = (type *)p - n\

#define KEY(FORMAT,ckey,type)\
			scanf(FORMAT, (type *)ckey);\

#define SORTING(size,base,type)\
	for (i =0; i<size; i++)\
	{\
	for (j=0; j<size-1; j++)\
		{\
			if ( ((type*)base)[j] > ((type *)base)[j+1]  )\
			{\
			*((type *)temp)=((type *)base)[j];\
			((type *)base)[j]=((type *)base)[j+1];\
			((type *)base)[j+1]=*((type *)temp);\
			}\
		}\
	}\
	free(temp)\

#define DISPLAY(size,base,type,FORMAT)\
	printf("Elements after sorting:\n");\
	for (i = 0; i< size; i++)\
	{\
		printf(FORMAT, ((type *)base)[i]);\
	}\
	putchar('\n')\

# define SEARCH( size,base,ckey, type)\
	half = size / 2;\
	tem = half;\
	while (1)\
	{\
		if ( *((type*)ckey) < ((type *)base)[tem]	)\
		{\
			if (half % 2 == 0)\
				half = half  - half/2;\
			else\
				half = half - half/2 - 1;\
				tem=half;\
		}\
		else if ( *((type*)ckey) > ((type *)base)[tem]	)\
		{\
			if (half % 2 == 0)\
				tem = tem + half/2;\
			else\
				tem = tem + half/2 + 1;\
				half/=2; \
		}\
		if  ( *((type *)ckey)  ==  ((type *)base)[tem] )\
			return tem;\
		if (half == 0)\
			return NOT_FOUND;\
	}\

//Function prototypes
int carrier(void *p, void *ckey, int n, int choice, int(*fp)(void * ,void *, int, int) );
int generic_binary_search(void *p, void* ckey,int n, int choice);

int main(int argc, char *argv[] )
{
	//Declaration of variables
	void *p;
	void *ckey;
	int i, n, choice;
	char option;
	int status;

	int flag = 1;

	if (argc == 1)
	{
		printf("Argument missing.Please try again...\n");
		return 1;
	}
	
	//Read number of elements
	n= atoi(argv[1]);

	//Prompt menu
	printf("Menu\n");
	printf("1.Char\n2.Int\n3.Float\n4.Double\n");
	printf("Enter your choice:");
	
	//Read choice
	scanf("%d", &choice);	
	
	switch(choice)
	{
		case 1:
				//Prompt to enter
				printf("Enter elements of type char :\n");
				ALLOCATE(n,p,char);
				POPULATE(n,p,char,"\n%c");
				break;

		case 2:
				//Prompt to enter
				printf("Enter elements of type int :\n");
				ALLOCATE(n,p,int);
				POPULATE(n,p,int,"%d");
				break;

		case 3:
				//Prompt to enter
				printf("Enter elements of type float:\n");
				ALLOCATE(n,p,float);
				POPULATE(n,p,float,"%f");
				break;

		case 4:
				//Prompt to enter
				printf("Enter elements of type double:\n");
				ALLOCATE(n,p,double);
				POPULATE(n,p,double,"%lf");
				break;

		default:
				flag =0;
				printf("Invalid option.\nPlease try again...\n");
	}

	/*
	 Passing function as a parameter
	*/
	if (flag == 1 )
	{
		ckey=malloc(sizeof(double));
		status = carrier(p,ckey,n,choice,generic_binary_search);

		if (status == NOT_FOUND)
			printf("Key not found\n");
		else
			printf("Key is found in %d place \n", status);

		//Free memory
		free(p);
		free(ckey);
	}


}
/*
 Third arg is a function pointer, it will return status,
 required paramenters are previous arguments
*/
int carrier(void *p, void *ckey, int n, int choice, int(*fp)(void * ,void *, int, int) )
{
	return (*fp)(p,ckey,n,choice);
}

/*
 It will return status,
 parameter of what type is decided by (choice).
 Then with the help of macro, key find out.
*/
int generic_binary_search(void *base, void* ckey,int n, int choice)
{
	int i,j;
	//Required for search
	int half, tem;

	//Required for sorting
	void *temp;
	temp=malloc(sizeof(double) );

	switch(choice)
	{
		case 1:
				printf("Enter a serch character:");
				KEY("\n%c",ckey,char);
				SORTING(n,base,char);
				DISPLAY(n,base,char,"%c\t");
				SEARCH(n,base,ckey,char);
				break;
		case 2: 
				printf("Enter an int to search:");
				KEY("%d",ckey,int);
				SORTING(n,base,int);
				DISPLAY(n,base,int,"%d\t");
				SEARCH(n,base,ckey,int);
				break;
		case 3:
				printf("Enter a float to search:");
				KEY("%f",ckey,float);
				SORTING(n,base,float);
				DISPLAY(n,base,float,"%f\t");
				SEARCH(n,base,ckey,float);
				break;
		default : 
				printf("Enter a double to search:");
				KEY("%lf",ckey,double);
				SORTING(n,base,float);
				DISPLAY(n,base,double,"%lf\t");
				SEARCH(n,base,ckey,double);
	}
}
