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
	if(top==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull(struct Node *top)
{
	struct Node *p = (struct Node*)malloc(sizeof(struct Node));
	if(p==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
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
		printf("STACK IS UNDERFLOW\n");
	}
	else
	{
		struct Node *ptr = tp;
		top = tp->next;
		int x = ptr->data;
		free(ptr);
		return x;
	}
}
main()
{
    printf("STACK IS EMPTY - %d\n",isEmpty(top));
    printf("STACK IS FULL - %d\n",isFull(top));
    top = push(top,11);
    top = push(top,12);
    top = push(top,13);
    top = push(top,14);
    top = push(top,15);
    top = push(top,16);
    printf("STACK IS EMPTY - %d\n",isEmpty(top));
    printf("STACK IS FULL - %d\n",isFull(top));
    printf("Popped data %d\n",pop(top));
    printf("Popped data %d\n",pop(top));
    printf("Popped data %d\n",pop(top));
    printf("Popped data %d\n",pop(top));
    printf("Popped data %d\n",pop(top));
    printf("Popped data %d\n",pop(top));
      
} 
/*
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
int isEmpty(struct Node *top)
{
	if(top==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull(struct Node *top)
{
	struct Node *p = (struct Node*)malloc(sizeof(struct Node));
	if(p==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
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
int pop(struct Node **top)
{
	if(isEmpty(*top))
	{
		printf("STACK IS UNDERFLOW\n");
	}
	else
	{
		struct Node *ptr = *top;
		*top = ( *top)->next;
		int x = ptr->data;
		free(ptr);
		return x;
	}
}
main()
{
	struct Node *top = NULL;
    printf("STACK IS EMPTY - %d\n",isEmpty(top));
    printf("STACK IS FULL - %d\n",isFull(top));
    top = push(top,11);
    top = push(top,12);
    top = push(top,13);
    top = push(top,14);
    top = push(top,15);
    top = push(top,16);
    printf("STACK IS EMPTY - %d\n",isEmpty(top));
    printf("STACK IS FULL - %d\n",isFull(top));
    printf("Popped data %d\n",pop(&top));
    printf("Popped data %d\n",pop(&top));
      
}
*/

