//function with return type and with argument
#include<stdio.h>
int fun(int a,int b);
main()
{
	int num_1 = 0, num_2 = 0;
	printf("Enter Number First :- ");
	scanf("%d",&num_1);
	printf("Enter Number Second :- ");
	scanf("%d",&num_2);
	printf("Addition :- %d",fun(num_1,num_2));
}
int fun(int a,int b)
{
	return a+b;
}
