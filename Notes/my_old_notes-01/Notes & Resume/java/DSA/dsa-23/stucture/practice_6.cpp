//structure with array
#include<stdio.h>
#include<string.h>
struct employee
{
	int emp_id;
	char name[100];
	int salary;
};

//main method
main()
{
	struct employee e[3];
	e[0].emp_id = 101;
	strcpy(e[0].name,"Vishal Nimbarte");
	e[0].salary = 50000;
	e[1].emp_id = 102;
	strcpy(e[1].name,"Vishal Nimbarte");
	e[1].salary = 70000;
	e[2].emp_id = 103;
	strcpy(e[2].name,"Vishal Nimbarte");
	e[2].salary = 80000;
	int i = 0;
	for(i=0;i<3;i++)
	{
		printf("Name   : %s\n",e[i].name);
		printf("Id     : %d\n",e[i].emp_id);
		printf("Salary : %d\n",e[i].salary);
		printf("------------------------------\n");
	}
}
