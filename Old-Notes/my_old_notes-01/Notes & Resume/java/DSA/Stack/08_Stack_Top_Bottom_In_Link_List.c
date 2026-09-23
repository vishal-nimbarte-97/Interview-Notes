//STACK TOP BOTTOM IN LINK LIST
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *top = NULL;
int isEmpty(struct Node *top)
{
	if(top==NULL)return 1;else return 0;
}
int isFull(struct Node *top)
{
	struct Node *p = (struct Node*)malloc(sizeof(struct Node));
	if(p==NULL)return 1;else return 0;
}
struct Node *push(struct Node *top,int data)
{
	if(isFull(top))
	{
		printf("Stack is Overflow\n");
	}
	else
	{
		struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
		ptr->data = data;
		ptr->next = top;
		top = ptr;
		return top;
	}
}
int pop(struct Node *tp)
{
	if(isEmpty(tp))
	{
		printf("stack is underflow\n");
	}
	else
	{
		struct Node *ptr = top;
		top = top->next;
		int x = ptr->data;
		free(ptr);
		return x;
	}
}
int peek(int pos)
{
	struct Node *ptr = top;
	int i = 0;
	while(i<=pos-1)
	{
		ptr = ptr->next;
		i++;
	}
	return ptr->data;
}
int stackTop(struct Node *top)
{
	return top->data;
}
int stackBottom(struct Node *top)
{
 struct Node *ptr = top;
 while(ptr->next!=NULL)
 {
 	ptr = ptr->next;
 }
 return ptr->data;
}
void display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr = ptr->next;
   }
}
main()
{
	top = push(top,99);
	top = push(top,22);
	top = push(top,33);
	top = push(top,44);
	top = push(top,55);
	display(top);
//	int i = 0;
//	for(i=0;i<5;i++)
//	{
//		printf("data->%d\n",peek(i));
//	}
	printf("\n\nStack Top -> %d\n\n",stackTop(top));
	printf("\n\nStack Top -> %d\n\n",stackBottom(top));
	
	printf("%d\n",pop(top));
	printf("%d\n",pop(top));
	printf("%d\n",pop(top));
	printf("%d\n",pop(top));
	printf("%d\n",pop(top));
	
}
