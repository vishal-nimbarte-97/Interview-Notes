//structure transfer to the function
#include<stdio.h>
#include<string.h>

struct employee 
{
	int emp_id;
	char name[100];
};

void fun(struct employee e);
void demo(struct employee *ptr);
main()
{
	struct employee e;
	struct employee *ptr;
	
	ptr = &e;
	
	ptr->emp_id = 101;
	strcpy(ptr->name,"Vishal Nimbarte");
	
	fun(e);	
	demo(&e);
}

void fun(struct employee e)
{
	printf("id : %d",e.emp_id);
	printf("\nname : %s",e.name);
	printf("--------------------\n");
}

void demo(struct employee *ptr)
{
	printf("id : %d",ptr->emp_id);
	printf("\nname : %s",ptr->name);
}
