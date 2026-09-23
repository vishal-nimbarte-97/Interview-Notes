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
	if(ptr->top==-1)return 1; 
	else return 0;
}
int isFull(struct stack *ptr)
{
	if(ptr->top==ptr->size-1) return 1;
	else return 0;
}
void push(struct stack *ptr,int data)
{
	if(isFull(ptr))printf("stack is overflow\n");
	else{
		ptr->top++;
	    ptr->arr[ptr->top] = data;
	}
}
int pop(struct stack *ptr)
{
	if(isEmpty(ptr))printf("stack is underflow\n");
	else{
		int x = ptr->arr[ptr->top];
		ptr->top--;
		return x;
	}
}
int stackTop(struct stack *ptr)
{
	return ptr->arr[ptr->top];
}
int stackBottom(struct stack *ptr)
{
	return ptr->arr[0];
}

main()
{
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	s->size = 5;
	s->top = -1;
	s->arr = (int*)malloc(s->size*sizeof(int));

//	printf("STACK IS FULL :- %d\n\n",isFull(s));
//	printf("STACK IS Empty :- %d\n\n",isEmpty(s));
	
	printf("stack of the top -> %d\n",stackTop(s));
	printf("stack of the Bottom -> %d\n",stackBottom(s));
	
	
//	printf("STACK IS FULL :- %d\n\n",isFull(s));
//	printf("STACK IS Empty :- %d\n\n",isEmpty(s));
//	
//	printf("popped the %d data from the stack\n\n",pop(s));
//	printf("popped the %d data from the stack\n\n",pop(s));
//	printf("popped the %d data from the stack\n\n",pop(s));
//	printf("popped the %d data from the stack\n\n",pop(s));
//	printf("popped the %d data from the stack\n\n",pop(s));
//	
//	printf("STACK IS FULL :- %d\n\n",isFull(s));
//	printf("STACK IS Empty :- %d\n\n",isEmpty(s));
	
}
/*
//STACK TOP AND BOTTOM OPERATTION 
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
	 return 1;
	else
	 return 0;
}
int isFull(struct stack *ptr)
{
	if(ptr->top==ptr->size-1)
	 return 1;
	else 
	return 0;
}  
void push(struct stack *ptr,int data)
{
	if(isFull(ptr))
	{
		printf("STACK IS OVERFLOW %d Data can't stored in the Stack\n\n'");
	}
	else
	{
		ptr->top+=1;
		ptr->arr[ptr->top] = data;
	}
}
int pop(struct stack *ptr)
{
	if(isEmpty(ptr))
	{
		printf("STACK IS UNDERFLOW Can't Stored in the Stack\n\n");
		return -1;
	}
	else
	{
		int temp = ptr->arr[ptr->top];
		ptr->top-=1;
		return temp;
	}
}
int stackTop(struct stack *ptr)
{
	return ptr->arr[ptr->top];
}
int stackBottom(struct stack *ptr)
{
	return ptr->arr[0];
}
main()
{
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	s->size = 5;
	s->top = -1;
	s->arr = (int*)malloc(s->size*sizeof(int));
	
	printf("STACK IS FULL :- %d\n\n",isFull(s));
	printf("STACK IS Empty :- %d\n\n",isEmpty(s));
    
	push(s,99);
	push(s,98);
	push(s,97);
	push(s,96);
	push(s,95);
	
	printf("STACK IS FULL :- %d\n\n",isFull(s));
	printf("STACK IS Empty :- %d\n\n",isEmpty(s));
	
	printf("Top of the Stack :- %d \n\n",stackTop(s));
	printf("Bottom of the Stack :- %d \n\n",stackBottom(s));
	
	printf("Popped the %d element in the stack\n\n",pop(s));
	printf("Popped the %d element in the stack\n\n",pop(s));
	printf("Popped the %d element in the stack\n\n",pop(s));
	printf("Popped the %d element in the stack\n\n",pop(s));
	printf("Popped the %d element in the stack\n\n",pop(s));
	
	printf("STACK IS FULL :- %d\n\n",isFull(s));
	printf("STACK IS Empty :- %d\n\n",isEmpty(s));
    
}
*/
