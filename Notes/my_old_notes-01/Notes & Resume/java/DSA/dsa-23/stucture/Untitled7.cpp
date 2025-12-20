//structure typedef keyword used

//#include<stdio.h>
//#include<string.h>
//typedef struct employee 
//{
//	int emp_id;
//	int age;
//}emp;
//
//main()
//{
//	employee emp;
//	emp.age = 10;
//	emp.emp_id = 1001;
//	printf("id : %d\n",emp.emp_id);
//	printf("name : %d\n",emp.age);
//}

#include<stdio.h>
#include<string.h>
struct employee 
{
	int emp_id;
	int age;
}emp;

main()
{
	employee emp;
	emp.age = 10;
	emp.emp_id = 1001;
	printf("id : %d\n",emp.emp_id);
	printf("name : %d\n",emp.age);
}
