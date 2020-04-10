/*
Demo code to convert farenheit to celcius
*/

#include <stdio.h>
int main()
{
	//declaration of variable
	float c,f;
	
	//prompt the user to enter temp. in farenheit
	printf("Enter the temp. in farenheit: ");

	//Read the value
	scanf("%f",&f);

	//convert farenheit into celcius
	c = ((float)5 / 9) * (f - 32);
	
	//print the value of celcius
	printf("Celcius: %.2f\n", c);

	return 0;
}
