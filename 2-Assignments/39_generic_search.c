/*
implement generic search
*/

#include<stdio.h>
#include <stdlib.h>
int generic_search(void *base, void *ikey, size_t n, size_t size, int type);
int main()
{
	//declaring variables
	char option;
    int iarray[10];
    float farray[10];
    char carray[10];
    double darray[10];
    

	int index, type, n, i, j, temp;
	
	do
	{
		printf("Enter the option\n");
		printf("1-int\n");
		printf("2-float\n");
		printf("3-char\n");
		printf("4-double\n");
		scanf("%d", &type);
		switch (type)
		{
			case 1:
			{
				 int key;
	              printf("Enter the number of array: ");
	              scanf("%d", &n);
	              
	              printf("Enter the array: \n");
	              for (i = 0; i < n; i++)
				  {
				  	  scanf("%d", &iarray[i]);
				  }

				  for (i = 0; i < n; i++)
				  {
				  	  for (j = i + 1; j < n; j++)
					  {
					  	  if (iarray[i] > iarray[j])
						  {
						  	  temp = iarray[i];
						  	  iarray[i] = iarray[j];
						  	  iarray[j] = temp;
						  }
					  }
				  }
	              for (i = 0; i < n; i++)
				  {
				  	  printf("iarray[%d]: %d\t", i, iarray[i]);
				  }
				  printf("\n");

				  
                  //Entering the character to be searched
	              printf("Enter the integer to be search\n");
	              scanf("%d", &key);
	              //calling generic_search function and storing the result in index
	              index = generic_search(iarray, &key, sizeof(int), sizeof(iarray)/sizeof(int), type);
	              printf("%d\n", index);
	              break;
			}
			case 2:
			{
				 float key, temp;
	              printf("Enter the number of array: ");
	              scanf("%d", &n);
	              
	              printf("Enter the array\n");
	              for (i = 0; i < n; i++)
				  {
				  	  scanf("%f", &farray[i]);
				  }

				  for (i = 0; i < n; i++)
				  {
				  	  for (j = i + 1; j < n; j++)
					  {
					  	  if (farray[i] > farray[j])
						  {
						  	  temp = farray[i];
						  	  farray[i] = farray[j];
						  	  farray[j] = temp;
						  }
					  }
				  }
	              for (i = 0; i < n; i++)
				  {
				  	  printf("farray[%d]: %f\t", i, farray[i]);
				  }
				  printf("\n");

				  
                  //Entering the character to be searched
	              printf("Enter the float number to be search\n");
	              scanf("%f", &key);
	              //calling generic_search function and storing the result in index
	              index = generic_search(farray, &key, sizeof(int), sizeof(iarray)/sizeof(int), type);
	              printf("%d\n", index);
	              break;
			}
			case 3:
			{
				 char key;
				 char temp;
	              printf("Enter the number of array: ");
	              scanf("%d", &n);
	              
	              printf("Enter the array:\n");
	              for (i = 0; i < n; i++)
				  {
				  	  scanf("\n%c", &carray[i]);
				  }

				  for (i = 0; i < n; i++)
				  {
				  	  for (j = i + 1; j < n; j++)
					  {
					  	  if (carray[i] > carray[j])
						  {
						  	  temp = carray[i];
						  	  carray[i] = carray[j];
						  	  carray[j] = temp;
						  }
					  }
				  }
	              for (i = 0; i < n; i++)
				  {
				  	  printf("carray[%d]: %c\t", i, carray[i]);
				  }
				  printf("\n");

				  
                  //Entering the character to be searched
	              printf("Enter the character to be search\n");
	              scanf("\n%c", &key);
	              //calling generic_search function and storing the result in index
	              index = generic_search(carray, &key, sizeof(char), sizeof(iarray)/sizeof(char), type);
	              printf("%d\n", index);
	              break;
			}
			case 4:
			{
				 double key, tem, tempp;
	              printf("Enter the number of array: ");
	              scanf("%d", &n);
	              
	              printf("Enter the array\n");
	              for (i = 0; i < n; i++)
				  {
				  	  scanf("%lf", &darray[i]);
				  }

				  for (i = 0; i < n; i++)
				  {
				  	  for (j = i + 1; j < n; j++)
					  {
					  	  if (darray[i] > darray[j])
						  {
						  	  temp = darray[i];
						  	  darray[i] = darray[j];
						  	  darray[j] = temp;
						  }
					  }
				  }
	              for (i = 0; i < n; i++)
				  {
				  	  printf("iarray[%d]: %lf\t", i, darray[i]);
				  }
				  printf("\n");

				  
                  //Entering the character to be searched
	              printf("Enter the double number to be search\n");
	              scanf("%lf", &key);
	              //calling generic_search function and storing the result in index
	              index = generic_search(darray, &key, sizeof(double), sizeof(iarray)/sizeof(double), type);
	              printf("%d\n", index);
	              break;
		}
		}
		
	   printf("Do you want to continue ? press[Y/y]");
	   scanf("\n%c", &option);
	  
	}
	while (option == 'Y' || option == 'y');
	
	
	
	
}
int generic_search(void *base, void *ikey, size_t n, size_t size, int type)
{
	int i, j;
	switch (type)
	{
		case 1:
		{
		
			

	
	           for (i = 0; i < size; i++)
	           {
		            for (j = 0; j < n; j++)
		            {
			             //if key is found in the string then return index value i.e i.
			              if (*(int *)base == *(int *)ikey)
			              {
				               return i;
				                break;
			               }
			              else
		
			              {
		                        //else keeps on searching
                                base = base + sizeof(char);
		    
		                  }
		    
	                }
		
                  }
		
                   break;
		}
		case 2:
		{
		
			

	
	            for (i = 0; i < size; i++)
	            {
		            for (j = 0; j < n; j++)
		            {
			             //if key is found in the string then return index value i.e i.
			             if (*(float *)base == *(float *)ikey)
			          {
				             return i;
				             break;
			           }
			             else
		
			           {
		                 //else keeps on searching
                         base = base + sizeof(char);
		    
		                }
		    
	                 }
		
                  }
                   break;
		}
		case 3:
		{
		
			

	
	             for (i = 0; i < size; i++)
	             {
		              for (j = 0; j < n; j++)
		              {
			                //if key is found in the string then return index value i.e i.
			               if (*(char *)base == *(char *)ikey)
			               {
				               return i;
				                break;
			               }
			               else
		
			               {
		                        //else keeps on searching
                                base = base + sizeof(char);
		    
		                    }
		    
	                     }
		
                    }
                      break;
		}
		case 4:
		{
		
			

	
	             for (i = 0; i < size; i++)
	             {
		              for (j = 0; j < n; j++)
		              {
			                //if key is found in the string then return index value i.e i.
			               if (*(double *)base == *(double *)ikey)
			               {
				               return i;
				                break;
			               }
			               else
		
			               {
		                        //else keeps on searching
                                base = base + sizeof(char);
		    
		                    }
		    
	                     }
		
                    }
                      break;
		}
	
	
		
	}
}


