//function with return type and without arguments
#include<stdio.h>
int fun();
main()
{
	printf("Addition :- %d",fun());
}

int fun()
{
	int num_1 = 0 , num_2 = 0;
	printf("Enter Number First :- ");
	scanf("%d",&num_1);
	printf("Enter Number Second :- ");
	scanf("%d",&num_2);
	return num_1+num_2;
}
