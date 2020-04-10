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
	struct employee e = {"Richard", 23, 1024, 55415.55};

	/*
	//define struct member 
	strcpy(e.name,"Richard");
	e.age = 23;
	e.emp_id = 10566;
	e.sal = 458136.56;
	*/

	//Define member like array
	//not valid
	//e = {"Richard", 23, 1024, 55415.55};

	printf("Name: %s\nAge: %hd\nEmp_ID: %d\nSal: %f\n", e.name, e.age, e.emp_id, e.sal);
	return 0;
}
