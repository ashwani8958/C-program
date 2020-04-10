/*
To find mean of int, float and double
*/
#include <stdio.h>
#include <stdlib.h>

//declaration of function prototype
double cal_mean(void *base, int type, int size);

int main()
{
	//Declaration of variables
	int type, i, n;
	void *array;
	double mean;
	char ch;
    
    do
	{
		//prompt user to select the type
		printf("Select the Data Type\n 1.int\n 2.float\n 3.double\n 4.short\n");
	    
	    //read the type
		scanf("%d", &type);
        
        //switch case as per the type selected
		switch(type)
		{
				
		case 1:

		      //prompt user to enter size of array elements      
		      printf("Enter the size of array elements: \n");

		      //read the size
		      scanf("%d", &n);

		      //dynamically allocating the memory to array
			  array = malloc(n * sizeof(int));

			  //prompt user to enter array elements
	          printf("Enter the array elements: \n");

	          //for loop to read the array elements
	          for (i = 0; i < n; i++)
			  {
			   	  scanf("%d", (int *)array + i);
			  }

			  //calling the function
			  mean = cal_mean(array, type, n);
			  
			  //printing mean
			  printf("Mean = %d\n", (int)mean); 

			  break; 
		
		case 2:
		      //prompt user to enter size of array elements
		      printf("Enter the size of array elements: \n");

		      //read the size
		      scanf("%d", &n);

		      //dynamically allocating the memory to array
			  array = malloc(n * sizeof(float));

			  //prompt user to enter array elements
	          printf("Enter the array elements: \n");

	          //for loop to read the array elements
	          for (i = 0; i < n; i++)
			   {
			   	   scanf("%f", (float*)array + i);
			   }
			   
			   //calling the function
			   mean = cal_mean(array, type, n);

               //printing mean
			   printf("Mean = %.2f\n", (float)mean); 

			   break;
		
		case 3:
		      //prompt user to enter the size of array elements
		      printf("Enter the size of array elements: \n");

		      //read the size
		      scanf("%d", &n);

		      //dynamically allocating the memory to array
			  array = malloc(n * sizeof(double));

			  //prompt user to enter the array elements
	          printf("Enter the array elements: \n");

	          //for loop to read the array elements
	          for (i = 0; i < n; i++)
			   {
			   	   scanf("%lf", (double *)array + i);
			   }
			   
			   //calling the function
			   mean = cal_mean(array, type, n);
               
               //printing mean value
			   printf("Mean = %lf\n", mean); 
			    
			   break;

		case 4:
		      //prompt user to enter the size of array elements
		      printf("Enter the size of array elements: \n");

		      //read the size
		      scanf("%d", &n);

		      //dynamically allocating the memory to array
			  array = malloc(n * sizeof(short));

			  //prompt user to enter the array elements
	          printf("Enter the array elements: \n");

	          //for loop to read the array elements
	          for (i = 0; i < n; i++)
			   {
			   	   scanf("%hi", (short *)array + i);
			   }
			   
			   //calling the function
			   mean = cal_mean(array, type, n);
               
               //printing mean value
			   printf("Mean = %hi\n", (short)mean); 
			    
			   break;
		
		default:
		       //promt user that he/she has selected invalid option
		       printf("Invalid Option...Try again\n");

		}
		//prompt user to continue or not
		printf("Want to continue...? Press[Y/y]: ");

		//read the choice
		scanf("\n%c", &ch);

    }while(ch == 'Y' || ch == 'y');

	return 0;
}

//function defination
double cal_mean(void *base, int type, int size)
{
	//declaration of variables
	double mean; 
	int i; 
	double sum = 0;
   	void *ptr = base;
	
	switch (type)
	{
		case 1:
	         //for loop to calculate sum of array elements
             for (i = 0; i < size; i++)
	         { 
				 sum = sum + *(int *)ptr;
				 ptr = ptr + sizeof(int);
	         }

	   		 mean = sum / size;
	         return mean;
	         break;

	    case 2:
	         //for loop to calculate sum of array elements
             for (i = 0; i < size; i++)
	         {
				sum = sum + *(float *)ptr;
				ptr = ptr + sizeof(float);
	         }
					
	         mean = sum / size;
			 return mean;
	         break;

		case 3:
	         //for loop to calculate sum of array elements
		     for (i = 0; i < size; i++)
	         {
			     sum = sum + *(double *)ptr;
				 ptr = ptr + sizeof(double);
	         }
		
	         mean = sum / size;
	         return mean;
	         break;
		case 4:
	         //for loop to calculate sum of array elements
		     for (i = 0; i < size; i++)
	         {
			     sum = sum + *(short *)ptr;
				 ptr = ptr + sizeof(short);
	         }
		
	         mean = sum / size;
	         return mean;
	         break;

  }
}

