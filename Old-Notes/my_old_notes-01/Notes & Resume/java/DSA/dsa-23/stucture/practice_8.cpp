//structure in pointer
#include<stdio.h>
#include<string.h>
struct employee 
{
	char name[100];
	int emp_id;
};
main()
{
	struct employee e;
	struct employee *ptr;
	
	ptr = &e;	
	
	(*ptr).emp_id = 101;
	strcpy((*ptr).name,"Vishal Nimbarte");
	
	printf("Employee Id   :- %d\n",(*ptr).emp_id);
	printf("Employee Name :- %s\n",(*ptr).name);
	
	struct employee ee;
	struct employee *ptr1;
	
	ptr1 = &ee;
	
	ptr1->emp_id = 102;
	strcpy(ptr1->name,"Pankaj thul");
		
	printf("Employee Id   :- %d\n",ptr1->emp_id);
	printf("Employee Id   :- %d\n",(*ptr1).emp_id);
	printf("Employee Id   :- %d\n",ee.emp_id);
	
	
}
