#include<stdio.h>
struct employee
{
	int a;
	char b;
	float c;
};
main()
{
	struct employee *ptr;
	struct employee e1 = {12,'v',12.23};
	ptr = &e1;
	printf("%d\n",&e1);
	printf("%d",ptr);
	printf("\n%d",ptr->a);
//	printf("\n%d",(&ptr).a);
			
}
