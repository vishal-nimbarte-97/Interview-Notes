//call by value 
//#include<stdio.h>
//void fun(int a,int b);
//main()
//{
//	int a = 10;
//	int b = 20;
//	fun(a,b);
//}
//void fun(int a,int b)
//{
//	printf("%d",a+b);
//}

//call by referance

#include<stdio.h>
void fun(int *a,int *b);
main()
{
	int num_1 = 10;
	int num_2 = 20;
	fun(&num_1,&num_2);//that is the call by refernace
}

void fun(int *a,int *b)
{
	printf("Addition :- %d",*a+*b);
}
