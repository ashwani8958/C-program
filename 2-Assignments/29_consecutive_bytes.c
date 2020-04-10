/*
	Requirements	: User allocate 8 consecutive bytes
					  of type --> char,int,float,double.
					  Provision of menu options.
					  Use of functions,pointers, static and dynamic memory.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Macro define
#define NOT_AVAILABLE -1

#define BYTES_PLACE(arr,n,index,notify) \
			for(i=0; i < 2*n; i++)\
			{\
				if ( arr[i] == '\0')\
				{\
				 arr[i++]=index + 48 ;\
					arr[i]=notify;\
					break;\
				}\
			}

#define DELETE(index,n)\
	int i;\
	for(i =0; i < n; i++)\
	{\
		p= p + index;\
		*(char*)p= '\0';\
		p = p - index;\
		index++;\
	}


//Function prototypes
void menu(int n);
int memory(int type, int total_bytes);
void add_element(int total_bytes);
void remove_element(int total_bytes);
void display_element(int total_bytes);

/*Global pointer variables
 p -->type is of consecutive bytes(memory)
 bytes --> type is of which index,
 what type data stored.
*/
void *p;
char *bytes;

int main()
{
	char option;

	do
	{
		//Declaration of variables
		int n;

		printf("\n`````````````Consecutive_bytes``````````\n\n");
		
		//Prompt the user 
		printf("Enter number of bytes need : ");
		
		//Read n
		scanf("%d", &n);

		if ( n > 9)
			printf("Invalid option.please try again...\n");
		else
		{
		
			/*
			 Dynamically creating memory
			 accord to bytes
			*/
			p = calloc(n , sizeof (char));

			//Handle error
			if (p == NULL)
			{
				perror("calloc");
				return -1;
			}

			bytes=calloc( (2*n), sizeof (char));	
			
			//Handle error
			if (bytes == NULL)
			{
				perror("calloc");
				return -1;
			}

			menu(n);
		}

		//User friendly
		printf("Do you want to continue? Press [Yy] or [Nn]:");

		scanf("\n%c", &option);

	}while(option =='Y' || option == 'y');

}

void menu(int n)
{
	
	printf("\n````````Menu window``````````\n\n");

	int option;

	printf("Menu\n");
	
	//options
	printf("1.Add element.\n2.Remove element.\n\
3.Display element.\n4.Exit from the program.\n");

	printf("Enter your option:");

	//Read option
	scanf("%d", &option);

	switch(option)
	{
		case 1: add_element(n);
				break;

		case 2: remove_element(n);
				break;

		case 3: display_element(n);
				break;

		case 4:	/* 
				Free the memory 
				before exit
				*/
				free(p);
				free(bytes);
				exit(1);
				break;

		default :
				printf("Invalid option.\nPlease try again...\n");
	}

	//user friendly
	menu(n);
}

/*
 Look for memory and return respective index to it,
 then allocate respective type of data to it.
*/
void add_element(int total_bytes)
{
	//Declaration of variables
	int option,index, type = 0;
	int i; 
	char ch;
	float f;
	double d;

	printf("\n````````Insert menu``````````\n\n");

	//Prompt user
	printf("Enter the type to insert:\n");
	printf("1.Char.\n2.Int\n3.Float\n4.Double\n");
	
	printf("Enyer your choice:");
	//Prompt option
	scanf("%d", &option);

	getchar();
	
	/*
	In all the below case memory will look for data 
	to accupy and if found,return respective index,
	then respective data is stored in those index,
	of p--->memory,and respective index is stored in 
	bytes of form followed by data type.
	bytes--->index + data type
	*/
	switch(option)
	{
		case 1:
				type = 1;
				index = memory(type,total_bytes);
				if( index != NOT_AVAILABLE)
				{
					printf("Enter a char:");
					scanf("%c", &ch);
					*((char*)p + index ) = ch;
					BYTES_PLACE(bytes,total_bytes,index,'c');
				}
				break;
		case 2:
				
				type = 4;
				index = memory(type,total_bytes);
				if( index != NOT_AVAILABLE)
				{
					printf("Enter an int:");
					scanf("%d", &i);
					p = p + index;
					*((int*)p) = i;
					p = p - index;
					BYTES_PLACE(bytes,total_bytes,index,'i');
				}
				break;
		case 3:
				type = 4;
				index = memory(type,total_bytes);
				if ( index != NOT_AVAILABLE )
				{
					printf("Enter a float:");
					scanf("%f", &f);
					p = p + index;
					*(float*)p = f;
					p = p -index;
					BYTES_PLACE(bytes,total_bytes,index,'f');
				}
				break;
		case 4: 
				type = 8;
				index = memory(type,total_bytes);
				if ( index != NOT_AVAILABLE )
				{
					printf("Enter a double:");
					scanf("%lf", &d);
					p = p + index;
					*(double*)p = d;
					p = p -index;
					BYTES_PLACE(bytes,total_bytes,index,'d');
				}
				break;
		default:
		        printf("Invalid option.Please try again\n");
		        add_element(total_bytes);
	}
	
	/*
	 if index not available, 
	 then accord to that prompt user 
	 to menu
	*/
	if (index == NOT_AVAILABLE)
	{
		printf("Memory not available of selected type.Please try again.\n");
		menu(total_bytes);
	}
}
/*
 It will look for continous bytes
 as user selected type of data 
*/
int memory(int type, int total_bytes)
{
	int count = 0,index = 0, avail_count = 1;
	int flag = 0;
	char *temp= bytes;
	
	for ( ;index < total_bytes;)
	{	
		while(*(char *)temp != index + '0') 
		{	
			if ( count == total_bytes*2 )
			{
				temp =bytes;
				count = 0;
				flag = 1;
				break;
			}
			count++;
			temp++;
		}
		if (flag == 1)
		{	
			flag =0;

			if ( avail_count++ == type )
				{
					if (type == 4 || type == 8)
						return (index  -(type - 1));
					return index;
				}
			else
			{
				index++;
				continue;
			}
		}
		else
		{
			avail_count =1;
			temp++;
			switch(*(char*)temp)
			{
				case 'c':
						 index = index + 1;
						 break;

				case 'd':
						 index = index + 8;
						 break;

				 default:
						 index = index + 4;
			}
		}
	}
	return NOT_AVAILABLE;
}
/*
As user selected index, deallocate memory of its type 
and delete index and next char in bytes
then display it
*/
void remove_element(int total_bytes)
{	
	int times;
	char del;

	display_element(total_bytes);
	
	char *temp = bytes;
	int index;

	printf("\n````````Delete menu``````````\n\n");

	printf("Enter the index you have to remove:");
	
	scanf("\n%d", &index);
	
	int i=0;
	
	/*
	Finding user enterd index in bytes
	and do accord to it
	*/
	while (1)
	{
		if ( (temp[i] - '0') == index )
		{
			p = p+ index;
			*(char *)p = '\0';
			p = p -index;
			temp[i++]='\0';
			del = temp[i];
			temp[i]='\0';
			break;
		}
		/*
		Incase if user enterd not available index,
		*/
		if (i == total_bytes*2 )
		{
			printf("Invalid choice.Please select an index which has a data...\n");
			remove_element(total_bytes);
			break;
		}
		i++;
	}
	if (del == 'i' || del == 'f')
	{
		times = 4;
		DELETE(index,times);
	}
	else if(del == 'd')
	{
		times = 8;
		DELETE(index,times);
	}

	display_element(total_bytes);
}

/*
Finding index in bytes,
and looking for next datatype 
then diaplat it after dereference 
with respective type
*/
void display_element(int total_bytes)
{
	printf("\n````````Display menu``````````\n\n");
	int index, iter, flag = 0;
	int pos;
	char *find = bytes;

	printf("INDEX\n");
	for (pos=0; pos < total_bytes;)
	{
		for (iter = 1; iter <= total_bytes*2 ; iter++,find++  )
		{
			if(*find ==  pos + '0' )
			{
				index = *find - '0';
				flag = 1;
				break;
			}
		}
		if (flag == 1)	
		{
			switch(*++find)
			{
				case 'c':
						p =p + index;
						printf("%c --->%c (char)\n", *--find, *(char *)p);
						pos =pos+1;
						p = p -index;
						break;

				case 'i':
						p = p + index;
						printf("%c --->%d (int)\n", *--find, *(int *)p );
						pos =pos+4;
						p = p - index;
						break;

				case 'f':
						p = p + index;
						printf("%c --->%f (float)\n", *--find, *(float *)p);
						pos =pos+4;
						p = p - index;
						break;

				case 'd':
						p = p + index;
						printf("%c --->%lf (double)\n", *--find, *(double *)p );
						pos =pos+8;
						p = p - index;
						break;

			}
			/*
			Since moving it to 
			two place for respective index
			*/
			find = find + 2;
			flag =0;
		}
		//For index donot occupied data
		else
		{
			find = bytes;
			printf("%d --->(empty)\n", pos);
			pos++;
		}
	}
}
