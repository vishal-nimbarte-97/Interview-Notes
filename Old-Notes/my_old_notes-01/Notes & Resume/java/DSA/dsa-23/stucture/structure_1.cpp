//structure in c 
#include<stdio.h>
#include<string.h>
struct employee
{
	char name[100];
	int age;
	char city[100];
};
main()
{
	struct employee e;
	e.age = 23;
	strcpy(e.name,"Vishal Nimbarte");
	strcpy(e.city,"Amravati");
	printf("Name : %s\n",e.name);
	printf("Age  : %d\n",e.age);
	printf("City : %s\n",e.city);
}
