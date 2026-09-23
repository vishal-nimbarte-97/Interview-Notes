#include<stdio.h>
#include<stdlib.h>
struct myArray
{
	int total_size;
	int used_size;
	int *ptr;
};
void createArray(struct myArray *a,int t_size,int u_size)
{
//	(*a).total_size = t_size;
//	(*a).used_size = u_size;
//	(*a).ptr = malloc(u_size*sizeof(int));
	a->total_size = t_size;//total sized of the array
	a->used_size = u_size;//user need a size of the array
	a->ptr = (int*)malloc(u_size*sizeof(int));//create the size of the array in the 
	//heap memory area
}
void setVal(struct myArray *a)
{
	int i = 0, n;
	for(i=0;i<a->used_size;i++)
	{
		printf("Enter the Number %d : ",i+1);
		scanf("%d",&n);
		(a->ptr)[i] = n;
	}
}
void getVal(struct myArray *a)
{
	int i = 0;
	for(i=0;i<a->used_size;i++)
	{
		printf("%d ",(a->ptr)[i]);
	}
}
main()
{
	struct myArray mark;
	createArray(&mark,10,5);	
	printf("-----------------------------------\n");
	setVal(&mark);
	printf("-----------------------------------\n");
	getVal(&mark);
}

