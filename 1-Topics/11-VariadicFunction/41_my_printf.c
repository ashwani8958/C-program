#include <stdarg.h>
#include <stdio.h>

void my_printf(const char *format, ...);
int main()
{
	char ch = 'A';
	float f = 5.66;
	double d = 532.66;
	my_printf("the value of character: %c\n", ch);
	my_printf("the integer value of character: %d\n", ch);
	my_printf("the value of f: %f\n", f);
	my_printf("the value of d: %f\n", d);
	return 0;
}

void my_printf(const char *format, ...)
{
	int i;
	float f;
	double d;
	const char *p = format;
	va_list ap;
	va_start(ap, format);
	char ch;
	char buffer[20] = {'\0'};

	while(*p)
	{
		if(*p == '%')
		{
			switch(*++p)
			{
				case 'c':
				{
					ch = (char)va_arg(ap, int);
					putchar(ch);
					break;
				}
				case 'd':
				{
					i = va_arg(ap, int);
					sprintf(buffer,"%d",i);
					puts(buffer);
					break;
				}
				case 'f':
				{
					f = (float)va_arg(ap, double);
					sprintf(buffer,"%f",f);
					puts(buffer);
					break;
				}
				case 'l':
				{
					switch(*++p)
					{
						case 'f':
						{
							d = va_arg(ap,double);
							sprintf(buffer,"%lf",d);
							puts(buffer);
							break;
						}
					}
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
