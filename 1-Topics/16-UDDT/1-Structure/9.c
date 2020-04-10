#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee
{
	char *name;
	short age;
	int emp_id;
	float sal;
};
int main()
{
	struct employee e;
	e.name = malloc(20);
	strcpy(e.name,"Richard");
	printf("Name: %s\n", e.name);

	/*
	int i;
	
	printf("Enter the number of employee: ");
	int size;

	scanf("%d", &size);

	//pointer to struct
	struct employee *p = malloc(size * sizeof(struct employee));
	struct employee *q = p;
	//prompt the user to enter name age employee id, sal
	for(i = 0; i < size; i++,p++)
	{
		printf("Enter Name, age, id, sal of employee:\n");
		scanf("%s%hd%d%f", p->name, &(p->age), &(p->emp_id), &(p->sal));
	}
	//print name,age,emp_id and sal
	
	for(i = 0; i < size; i++,q++)
	{
		printf("Name: %s\nAge: %hd\nEmp_ID: %d\nSal: %f\n", q->name, q->age, q->emp_id, q->sal);
	}
	*/

	return 0;
}
