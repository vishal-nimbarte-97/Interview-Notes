/*
#include<stdio.h>
//ADT Array structure
struct myArray
{
	int total_size;
	int used_size;
	int *ptr;
};
void createArray(struct myArray *a,int tSize,int uSize)
{
//	(*a).total_size = tSize;
//	(*a).total_size = uSize;
//	(*a).ptr = (int*)malloc(tSize*sizeof(int));

    a->total_size = tSize;
	a->used_size = uSize;
	a->ptr= (int*)malloc(tSize*sizeof(int));
}
void show(struct myArray *a)
{
	int i =0;
	for(i=0;i<a->used_size;i++)
	{
	   printf("%d\n",(a->ptr)[i]);
	}
}
void setVal(struct myArray *a)
{
	int i =0,n;
	for(i=0;i<a->used_size;i++)
	{
		printf("Enter element %d ",i);
		scanf("%d",&n);
		(a->ptr)[i] = n;
	}
}
main()
{
	struct myArray marks;
	createArray(&marks,10,2);
	printf("We are running setVal now\n");
	setVal(&marks);
	printf("WE are running show now\n");
	show(&marks);
	return 0;
}
*/

//ADT create a code
#include<stdio.h>
struct myArray
{
	int total_size;
	int used_size;
	int *ptr;
};
void createArray(struct myArray *a,int t_size,int u_size);
void setVal(struct myArray *a);
void mark(struct myArray *a);
main()
{
	struct myArray mark;//dereferance of the structure
	createArray(&mark,10,5);
	printf("SCANING THE ELEMENT IN THE ARRAY \n");
	setVal(&mark);
	printf("PRINTING THE ELEMENT IN THE ARRAY \n");
	show(&mark);

}
void createArray(struct myArray *a,int t_size,int u_size)
{
//	(*a).total_size = t_size;
//	(*a).used_size = u_size;
//	(*a).ptr = malloc(u_size*sizeof(int));
    a->total_size = t_size;
    a->used_size = u_size;
    a->ptr = (int*)malloc(u_size*sizeof(int));
}
void setVal(struct myArray *a)
{
	int i = 0,n;
	for(i=0;i<a->used_size;i++)
	{
		printf("Enter the %d number : ",i+1);
		scanf("%d",&n);
	    (a->ptr)[i] = n;
	}
}
void show(struct myArray *a)
{
	int i = 0;
	for(i=0;i<a->used_size;i++)
	{
		printf("%u -> %d \n",&(a->ptr)[i],(a->ptr)[i]);
	}
}
