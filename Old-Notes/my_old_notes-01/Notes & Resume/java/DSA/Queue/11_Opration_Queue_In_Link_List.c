//Operation in queue using the link list..!
#include"stdio.h"
#include"stdlib.h"
struct Node
{
	int data;
	struct Node *next;
};
struct Node *front = NULL;
struct Node *rare = NULL;
int isQueueEmpty()
{
	if(front==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isQueueFull()
{
	struct Node *n = (struct Node*)malloc(sizeof(struct Node));
	if(n==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void enqueue(int data)
{
	if(isQueueFull())
	{
		printf("Queue is Full..!\n");
	}
	else
	{
		struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
		ptr->data = data;
		ptr->next = NULL;
		if(front==NULL)
		{
			front=rare=ptr;
		}
		else
		{
			rare->next = ptr;
			rare = ptr;
		}
		printf("Enqueue - %d\n",ptr->data);
	}
}
int dequeue()
{
	if(isQueueEmpty())
	{
		printf("Queue is Empty..!\n");
		return -1;
	}
	else
	{   struct Node *ptr = front;
		front = front->next;
		int variable = ptr->data;
		free(ptr);
		return variable;
	}
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
	if(isQueueEmpty())
	{
		printf("Queue is Empty..\n");
	}
	else
	{
		printf("Queue is not Empty..\n");
	}
	if(isQueueFull())
	{
		printf("Queue is Full..\n");
	}
	else
	{
		printf("Queue is not Full..\n");
	}
	printf("\n\n");
	enqueue(12);
	enqueue(13);
	enqueue(14);
	enqueue(15);
	enqueue(16);
	printf("\n\n");
	display(front);
	printf("\n");
	if(isQueueEmpty())
	{
		printf("Queue is Empty..\n");
	}
	else
	{
		printf("Queue is not Empty..\n");
	}
	if(isQueueFull())
	{
		printf("Queue is Full..\n");
	}
	else
	{
		printf("Queue is not Full..\n");
	}
	printf("\n\n");
	printf("Dequeue - %d\n",dequeue());
	printf("Dequeue - %d\n",dequeue());
	printf("Dequeue - %d\n",dequeue());
	printf("Dequeue - %d\n",dequeue());
	printf("Dequeue - %d\n",dequeue());
	printf("\n");
	if(isQueueEmpty())
	{
		printf("Queue is Empty..\n");
	}
	else
	{
		printf("Queue is not Empty..\n");
	}
	if(isQueueFull())
	{
		printf("Queue is Full..\n");
	}
	else
	{
		printf("Queue is not Full..\n");
	}
	
}
