#include <stdio.h>
#include <string.h>

struct employee
{
	char name[20];
	short age;
	int emp_id;
	float sal;
};
int main()
{
	//declare variable of struct employee type
	struct employee e;

	//pointer to struct
	struct employee *p = &e;
	
	//prompt the user to enter name age employee id, sal
	printf("Enter Name, age, id, sal of employee:\n");
	scanf("%s%hd%d%f", p->name, &(p->age), &(p->emp_id), &(p->sal));
	
	//print name,age,emp_id and sal
	printf("Name: %s\nAge: %hd\nEmp_ID: %d\nSal: %f\n", p->name, p->age, p->emp_id, p->sal);

	return 0;
}
