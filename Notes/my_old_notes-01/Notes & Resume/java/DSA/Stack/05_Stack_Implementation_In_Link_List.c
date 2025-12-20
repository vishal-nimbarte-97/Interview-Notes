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
main()
{
	struct Node *top = NULL;
	if(isEmpty(top))
	{
		printf("Stack is Empty\n");
	}
	else
	{
		printf("Stack is not Empty\n");
	}
	if(isFull(top))
	{
		printf("Stack is Full\n");
	}
	else
	{
		printf("Stack is not Full\n");
	}
}
/*
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *top = NULL;
int isEmpty(struct Node *tp)
{
	if(top == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull(struct Node *tp)
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
struct Node *push(struct Node *tp,int data)
{
	if(isFull(top))
	{
		printf("STACK IS OVERFLOW\n\n");
	}
	else
	{
		struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
		ptr->data = data;
		ptr->next = tp;
		top = ptr;
		return top;
	}
}
int pop(struct Node *tp)
{
	if(isEmpty(tp))
	{
		printf("stack is overflow\n\n");
	}
	else
	{
		struct Node *p = tp;
		top = tp->next;
		int x = p->data;
		free(p);
		return x;
	}
}
void display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
}
main()
{  
	top = push(top,99);
	top = push(top,199);
	top = push(top,929);
	top = push(top,929);
	top = push(top,499);
	
	display(top);
	printf("\n\nPopped Element -> %d\n\n",pop(top));
	printf("\n\nPopped Element -> %d\n\n",pop(top));
	printf("\n\nPopped Element -> %d\n\n",pop(top));
	printf("\n\nPopped Element -> %d\n\n",pop(top));
	printf("\n\nPopped Element -> %d\n\n",pop(top));
	printf("\n\nPopped Element -> %d\n\n",pop(top));
	
	
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
	if(top == NULL)
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
		printf("STACK IS OVERFLOW\n\n");
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
		printf("stack is overflow\n\n");
	}
	else
	{
		struct Node *p = *top;
		*top = (*top)->next;
		int x = p->data;
		free(p);
		return x;
	}
}
void display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
}
main()
{   struct Node *top = NULL;
	top = push(top,99);
	top = push(top,199);
	top = push(top,929);
	top = push(top,929);
	top = push(top,499);
	
	int **ptr;
	ptr = &top;
	display(top);
	printf("\n\nPopped Element -> %d\n\n",pop(ptr));
	printf("\n\nPopped Element -> %d\n\n",pop(ptr));
	
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
//stack creation using the link list
struct Node
{
	int data;
	struct Node *next;
};

//stack is empty or not checked
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

//stack is full or not checked
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

//pushing the data in the stack
struct Node *push(struct Node *top,int data)
{
	if(isFull(top))
	{
		printf("STACK IS OVERFLOW\n\n");
	}
	else
	{
		struct Node * n = (struct Node*)malloc(sizeof(struct Node));
		n->data = data;
		n->next = top;
		top = n;
		return top;
	}
}

//popping the data from the stack
int pop(struct Node **top)
{
	if(isEmpty(*top))
	{
		printf("STACK IS OVERFLOW\n\n");
	}
	else
	{
		struct Node *n = *top;
		*top = (*top)->next;
		int x = n->data;
		free(n);
		return x;
	}
}

//printing the stack data
void display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("Element In the Stack - %d \n\n",ptr->data);
		ptr = ptr->next;
	}
}
main()
{
	struct Node *top = NULL;
	//Data initilizing in the stack using the linked list
	top = push(top,99);
	top = push(top,89);
	top = push(top,29);
	top = push(top,49);
	top = push(top,19);
	top = push(top,59);
	//printing the stack using the linked list
	display(top);
	printf("Popped the element from the stack - %d\n\n",pop(&top));
	printf("Popped the element from the stack - %d\n\n",pop(&top));
	printf("Popped the element from the stack - %d\n\n",pop(&top));
	printf("Popped the element from the stack - %d\n\n",pop(&top));
	printf("Popped the element from the stack - %d\n\n",pop(&top));
	printf("Popped the element from the stack - %d\n\n",pop(&top));
	printf("Popped the element from the stack - %d\n\n",pop(&top));
	
}
*/
