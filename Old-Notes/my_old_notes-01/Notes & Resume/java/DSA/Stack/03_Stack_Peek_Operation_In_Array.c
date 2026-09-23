//peek() operation in the stack : - peek operation is stack is data printing and checked the index position 
//stored the data;
#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int size;
	int top;
	int *arr;
};
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
void push(struct stack *ptr,int data)
{
	if(isFull(ptr))
	{
		printf("STACK IS OVERFLOW %d Element can Not stored in the stack\n\n",data);
	}
	else
	{
		ptr->top++;
		ptr->arr[ptr->top] = data;
	}
}
int pop(struct stack *ptr)
{
	if(isEmpty (ptr))
	{
		printf("STACK IS OVERFLOW\n\n");
		return -1;
	}
	else
	{
		int temp = ptr->arr[ptr->top];
		ptr->top--;
		return temp;
	}
}
int peek(struct stack *ptr,int i)
{
	if(ptr->top-i+1<0)
	{
		printf("NOT A VALIDE POSITION\n\n");
		return -1;
	}
	else
	{
		return ptr->arr[ptr->top-i+1];
	}
	
}
main()
{
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	s->size = 5;
	s->top = -1;
	s->arr = (int*)malloc(sizeof(int));
	push(s,99);
	push(s,98);
	push(s,97);
	push(s,96);
	push(s,95);
	int i = 0;
	for(i=1;i<=s->top+1;i++)
	{
		printf("The value at postion %d is %d\n\n",i,peek(s,i));
	}
}
