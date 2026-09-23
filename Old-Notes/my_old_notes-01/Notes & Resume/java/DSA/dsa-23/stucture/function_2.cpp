//Function without return type and with argument
#include<stdio.h>
void fun(int num_1,int num_2);
main()
{
	int num_1 = 0,num_2 = 0;
	printf("Enter Number First :- ");
	scanf("%d",&num_1);
	printf("Enter Number Second :- ");
	scanf("%d",&num_2);
	fun(num_1,num_2);
}
void fun(int num_1,int num_2)
{
	printf("Addition :- %d",num_1+num_2);
}
