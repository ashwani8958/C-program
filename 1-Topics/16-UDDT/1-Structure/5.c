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
	struct employee e[3];
	int i;

	
	//prompt the user to enter name age employee id, sal
	for(i = 0; i < 3; i++)
	{
		printf("Enter Name, age, id, sal of employee:\n");
		scanf("%s%hd%d%f", e[i].name, &(e[i].age), &(e[i].emp_id), &(e[i].sal));
	}
	//print name,age,emp_id and sal
	for(i = 0; i < 3; i++)
	{
		printf("Name: %s\nAge: %hd\nEmp_ID: %d\nSal: %f\n", e[i].name, e[i].age, e[i].emp_id, e[i].sal);
	}

	return 0;
}
