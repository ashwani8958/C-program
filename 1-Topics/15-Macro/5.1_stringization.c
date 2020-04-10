#include <stdio.h>
#define SUM(x) printf(#x" = %f\n", x)

int main()
{
	float a,b;
	printf("Enter the value of a & b: ");
	scanf("%f%f", &a, &b);

	SUM(a + b);

	return 0;
}
