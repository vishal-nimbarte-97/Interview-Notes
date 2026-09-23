//structure initilization
#include<stdio.h>
#include<string.h>
struct employee
{
	char name[100];
	char salary[100];
};
main()
{
	struct employee vishal = {"Vishal Nimbarte","100000000000"};
	struct employee pankaj = {"Pankaj Thul","23123133"};
	struct employee amar = {0};
	printf("Name   : %s\n",vishal.name);
	printf("Salary : %s\n",vishal.salary);
	printf("---------------------------\n");
	printf("Name   : %s\n",pankaj.name);
	printf("Salary : %s\n",pankaj.salary);
	printf("---------------------------\n");
	printf("Name   : %s\n",amar.name);
	printf("Salary : %s\n",amar.salary);
	printf("---------------------------\n");
	
}
