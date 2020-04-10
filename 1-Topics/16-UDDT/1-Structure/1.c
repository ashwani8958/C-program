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
	struct employee e;
	strcpy(e.name,"Richard");
	e.age = 23;
	e.emp_id = 10566;
	e.sal = 458136.56;

	printf("Name: %s\nAge: %hd\nEmp_ID: %d\nSal: %f\n", e.name, e.age, e.emp_id, e.sal);
	return 0;
}
