//STACK IS OPERATION IN ARRAY
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
	if(ptr->top == -1)
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
		printf("STACK IS OVERFLOW %d Element can't Stored in the Stack\n\n",data);
	}
	else
	{
		ptr->top++;
		ptr->arr[ptr->top] = data;
	}
}
int pop(struct stack *ptr)
{
	if(isEmpty(ptr))
	{
		printf("STACK IS UNDERFLOW,can't from the stack\n\n");
		return -1;
	}
	else
	{
		int temp = ptr->arr[ptr->top];
		ptr->top--;
		return temp;
	}
}
main()
{
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	s->size = 5;
	s->top = -1;
	s->arr = (int*)malloc(s->size*sizeof(int));
	
	printf("BEFORE PUSHING THE ELEMENT IN THE STACK FULL  --> %i\n\n",isFull(s));
	printf("BEFORE PUSHING THE ELEMENT IN THE STACK EMPTY --> %i\n\n",isEmpty(s));
	
	//PUSHING THE DATA IN THE STACK
	push(s,11);//0
	push(s,12);//1
	push(s,13);//2
	push(s,14);//3
	push(s,15);//4 last in first out from pop operation
	//push(s,16);
	
	printf("AFTER PUSHING THE ELEMENT IN THE STACK FULL   --> %i\n\n",isFull(s));
	printf("AFTER PUSHING THE ELEMENT IN THE STACK EMPTY  --> %i\n\n",isEmpty(s));
	
    //POPPED THE DATA IN THE STACK
    printf("POPPED %d FROM THE STACK\n\n",pop(s));
    printf("POPPED %d FROM THE STACK\n\n",pop(s));
	printf("POPPED %d FROM THE STACK\n\n",pop(s));
	printf("POPPED %d FROM THE STACK\n\n",pop(s));
	printf("POPPED %d FROM THE STACK\n\n",pop(s));
	
    printf("AFTER POPPING THE ELEMENT IN THE STACK FULL   --> %i\n\n",isFull(s));
	printf("AFTER POPPING THE ELEMENT IN THE STACK EMPTY  --> %i\n\n",isEmpty(s));
	
	//PUSHING THE DATA IN THE STACK
	push(s,11);//0
	push(s,12);//1
	push(s,13);//2
	push(s,14);//3
	push(s,15);//4 last in first out from pop operation
	//push(s,16);
	
	printf("AFTER PUSHING THE ELEMENT IN THE STACK FULL   --> %i\n\n",isFull(s));
	printf("AFTER PUSHING THE ELEMENT IN THE STACK EMPTY  --> %i\n\n",isEmpty(s));
	
}
