#include<stdio.h>
struct employee 
{
	char emp_name[100];
	int emp_id;
	char emp_city[100];
};


main()
{
	struct employee e = {"Vishal Nimbarte",101,"Amravati"};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		printf("%s",e.emp_name);	
//	}	
	printf("%d",sizeof(employee));
}
