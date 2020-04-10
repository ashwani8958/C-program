#include <stdio.h>
#define SQUARE(x) x * x
#define SQUARE1(x) (x) *(x)
int main()
{
	int r = SQUARE(5 + 3);

	int correct_r = SQUARE1(5 + 3);

	printf("r = %d\n", r);

	printf("Correct_r = %d\n", correct_r);
	return 0;
}
