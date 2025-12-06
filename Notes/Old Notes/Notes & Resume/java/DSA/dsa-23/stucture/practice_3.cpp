//passing structure to the function
#include<stdio.h>
struct employee 
{
	char name[100];
	int salary;
};
main()
{
	struct employee e = {"vishal nimbarte",50000};
	fun(struct employee e);
}

void fun(struct employee emp)
{
	printf("%d",e.name);
}
