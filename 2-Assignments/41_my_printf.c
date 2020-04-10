/*
Assignment code to implement printf function
*/

#include <stdio.h>
#include <stdarg.h>

//Function Prototype
void my_printf(const char * ,...);

int main()
{
	//Declare variable
	char ch = 'a';
	int i = 10;
	float f = 2.5;
	double d = 25.23;
	long int di = 25;
	long double a = 25.23;
	long long b = 55;
	
	//Function call to print 
	my_printf("The value of ch: %c\n\n", ch);
	my_printf("The value of i: %d\n", i);
	my_printf("The value of f: %f\n", f);
	my_printf("The value of d: %lf\n", d);
	my_printf("The value of di: %ld\n", di);
	my_printf("The value of d: %Lf\n", a);
	my_printf("The value of di: %lld\n", b);
}

//Definition of function
void my_printf(const char *format ,...)
{
	//Declare variable
	const char *p = format;
	va_list ap;
	va_start(ap,format);
	char ch, buffer[20] = {'\0'};
	int i;
	double d;
	long int di;
	long double a;
	long long b;
	float f;

	while(*p)
	{
		if(*p == '%')
		{
			switch(*++p)
			{
				case 'c' :
							ch =(char)va_arg(ap,int);
							putchar(ch);
							break;
				case 'd' :
							i =va_arg(ap,int);
							sprintf(buffer,"%d",i);
							puts(buffer);
							break;
				case 'f' :
							f =(float)va_arg(ap,double);
							sprintf(buffer,"%f",f);
							puts(buffer);
							break;
				case 'l' :
							switch(*++p)
							{
								case 'f':
											d =(double)va_arg(ap,double);
											sprintf(buffer,"%lf",d);
											puts(buffer);
											break;
								case 'd' :
											di =va_arg(ap,double);
											sprintf(buffer,"%ld",di);
											puts(buffer);
											break;
								case 'l' :
											switch(*++p)
											{
											case 'd' :
														b =va_arg(ap,long long);
														sprintf(buffer,"%lld",b);
														puts(buffer);
														break;
											}
											break;
							}
							break;
				case 'L' :
							a =(long double)va_arg(ap,long double);
							sprintf(buffer,"%Lf",a);
							puts(buffer);
							break;
				default :
							puts("format should be %d or %f or %c");
							break;
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

