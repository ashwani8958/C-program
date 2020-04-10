#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char *name;
	int sub[3];
	float avg;
	char grade;
}student_t;

void populate(student_t *p, int n);
void average(student_t *p, int n);
void print(student_t *p, int n);
void grades(student_t *p, int n);

int main()
{
	student_t *p;
	int n;
	printf("Enter the number of student: ");
	scanf("%d", &n);

	p = malloc(n * sizeof(student_t));

	populate(p,n);
	average(p,n);
	grades(p,n);
	print(p,n);
	return 0;
}

void populate(student_t *p, int n)
{
	char name[20];
	int i, j;

	for(i = 0; i < n ;i++)
	{
		printf("Enter %d student details\n", i + 1);
		printf("Enter name: ");
		scanf("%s", name);
		p[i].name =malloc(strlen(name) + 1);
		strcpy(p[i].name, name);
		for(j = 0; j < 3; j++)
		{
			printf("Enter the marks of %d subject: ", j + 1);
			scanf("%d", &(p[i].sub[j]));
		}
		memset(name, '\0', 20);
	}
}

void average(student_t *p, int n)
{
	int i,j;
	int sum;
	for(i = 0; i < n; i++)
	{
		sum = 0;
		for(j = 0; j < 3; j++)
		{
			sum = sum + p[i].sub[j];
		}
	p[i].avg =  (float)sum / 3;

	}
}
void print(student_t *p, int n)
{
	int i,j;

	for( i = 0; i < n; i++)
	{
		printf("%d Student name : %s\n", i +1, p[i].name);
		for(j = 0; j < 3; j++)
		{
			printf("Marks of %d subject: %d\n", j + 1, p[i].sub[j]);
		}

		printf("Average of all three subject: %f\n", p[i].avg);
		printf("Grade: %c\n", p[i].grade);

		printf("\n");
	}
}
void grades(student_t *p, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (p[i].avg >= 90)
		{
			p[i].grade = 'A';
		}
		else if( 80 >= p[i].avg <= 89)
		{
			p[i].grade = 'B';
		}
		else if(70 >= p[i].avg <= 79  )
		{
			p[i].grade = 'C';
		}
		else if( 60 >= p[i].avg <= 69)
		{
			p[i].grade = 'D';
		}
		else
		{
			p[i].grade = 'F';
		}
	}
}
