//STACK IS IMPLEMENTATION IN ARRAY
#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int size;
	int top;
	int *arr;
};

//STACK IS EMPTY OR NOT CHECKDED
int isEmpty(struct stack *ptr)
{
	if(ptr->top==-1)
	{
		return 1;
	}
	else
	{
	    return 0;	
	}
}

//STACK IS FULL OR NOT CHECKED
int isFull(struct stack *ptr)
{
	if(ptr->top==ptr->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void display(struct stack *ptr)
{
	
	int i = 0;
	//for(i=0;i<5;i++)
	for(i=0;i<=ptr->top;i++)
	{
		printf("%d ",ptr->arr[i]);
	}
	
}

main()
{
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));//memory allocation in structure
	
	s->size = 5;
	s->top = -1;
	s->arr = (int*)malloc(s->size*sizeof(int));
	
	
	//STACK DATA implemenation
	s->arr[0] = 10;
	s->top = s->top + 1;
	s->arr[1] = 20;
	s->top = s->top + 1;
	s->arr[2] = 30;
	s->top = s->top + 1;
	s->arr[3] = 40;
	s->top = s->top + 1;
	s->arr[4] = 50;
	s->top = s->top + 1;
	
	//STACK IS EMPTY OR NOT
	if(isEmpty(s))
	{
		printf("STACK IS EMPTY..!\n\n");
	}
	else
	{
		printf("STACK IS NOT EMPTY\n\n");
	}
	
	//STACK IS FULL OR NOT
	if(isFull(s))
	{
		printf("STACK IS FULL..!\n\n");
	}
	else
	{
		printf("STACK IS NOT FULL\n\n");
	}
	
	//PRINTING THE DATA IN THE STACK
	display(s);
}
