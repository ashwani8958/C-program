/*
Implement my own scanf function
*/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio_ext.h>

//Prototype declaration
void my_printf(const char *format, ...);
void my_scanf(const char *format, ...);

int main()
{
	//Declare the variable
	char ch;
	int  i;
	float f;
	double d;
	long int ld;
	
	//prompt the user to enter the character
	my_printf("Enter the character: ");

	//Function call
	my_scanf("%c", &ch);

	//print the entered character
	my_printf("You entered: %c\n", ch);

	//clear the buffer
	getchar();
	
	//prompt the user to enter the number
	my_printf("Enter the integer value: ");

	//Function call
	my_scanf("%d", &i);

	//print the entered integer
	my_printf("You entered: %d", i);

	//clear the stdin buffer
	__fpurge(stdin);
	
	//prompt the user to enter the float value
	my_printf("Enter the float value: ");

	//Function call
	my_scanf("%f", &f);

	//print the entered float number
	my_printf("You entered: %f", f);

	//clear the stdin buffer
	__fpurge(stdin);
	
	//prompt the user to enter the double number
	my_printf("Enter the double value: ");

	//Function call
	my_scanf("%lf", &d);

	//print the entered double number
	my_printf("You entered: %lf", d);

	//clear the stdin buffer
	__fpurge(stdin);
	
	//prompt the user to enter the long integer
	my_printf("Enter the long int value: ");

	//function call
	my_scanf("%ld", &ld);

	//print the entered long int
	my_printf("You entered: %ld", ld);

	//clear stdin buffer
	__fpurge(stdin);

	return 0;
	
}	

//Function Definition
void my_printf(const char *format, ...)
{
	//declare variable
	const char *p = format;
	va_list ap;
	va_start(ap, format);
	char ch;
	int i;
	float f;
	double d;
	long int ld;
	long double Lf;
	char buffer[20] = {'\0'};

	while(*p)
	{
		if(*p == '%')
		{
			switch (*++p)
			{
				case 'c':
						ch = (char)va_arg(ap, int);
						putchar(ch);
						break;

				case 'd':
						i = va_arg(ap, int);
						sprintf(buffer, "%d", i);
						puts(buffer);
						break;

				case 'f':
						f = (float)va_arg(ap, double);
						sprintf(buffer, "%f", f);
						puts(buffer);
						break;

				case 'l':
						switch (*++p)
						{
							case 'f':
									d = va_arg(ap, double);
									sprintf(buffer, "%lf", d);
									puts(buffer);
									break;

							case 'd':		
									ld = va_arg(ap,  long int);
									sprintf(buffer, "%ld", ld);
									puts(buffer);
									break;
						}	
						break;
				case 'L':
						switch (*++p)
						{
							case 'f':
									Lf = va_arg(ap, long double);
									sprintf(buffer, "%Lf", Lf);
									puts(buffer);
						}	
						
					
			}	
		}
		else
		{
			putchar(*p);
		}	
		p++;
	}
	va_end(ap);
}	

void my_scanf(const char*format, ...)
{
	char buffer[30];
	const char *p = format;
	va_list ap;
	va_start(ap,format);
	char *ch;
	int *i;
	float *f;
	double *lf;
	long int *ld;
	while(*p)
	{
		if(*p == '%')
		{
			switch (*++p)
			{	
				case 'c':
						ch = va_arg(ap, char *);
						*ch = fgetc(stdin);
						break;

				case 'd':
						i = va_arg(ap, int *);
						fgets(buffer,30,stdin);
						*i = atoi(buffer);
						break;
						
				case 'f':
						f = (float *)va_arg(ap, double *);
						fgets(buffer,30,stdin);
						*f = atof(buffer);
						break;
				
				case 'l':
						switch (*++p)
						{
							case 'f':
									lf = va_arg(ap, double *);
									fgets(buffer,30,stdin);
									*lf = atof(buffer);
									break;
									
							case 'd':		
									ld = va_arg(ap, long int *);
									fgets(buffer,30,stdin);
									*ld = atoi(buffer);
									break;

						}	
				
 
						

			}

		}	
		else
		{
			putchar(*p);
		}	
		p++;
	}	
	va_end(ap);
}	
