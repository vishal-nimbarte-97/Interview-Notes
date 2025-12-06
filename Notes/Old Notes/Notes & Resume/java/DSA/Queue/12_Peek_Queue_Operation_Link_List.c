//peek operation in queue uisng the link list..
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
//globel declaration in queue structure 
struct Node *front = NULL;
struct Node *rare = NULL;
//queue is empty or not checked..
int isQueueEmpty()
{
	if(front == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//queue is full or not
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
//enqueue operation
void enqueue(int data)
{
	if(isQueueFull())
	{
		printf("Queue is Full.!\n");
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
		printf("Queue is Empty..\n");
		return -1;
	}
	else
	{
		struct Node *ptr = front;
	    front = front->next;
	    int data = ptr->data;
	    free(ptr);
	    return data;
	}
}
int peekQueue(int position)
{
	int i = 0;
	struct Node *ptr = front;
	while(i<position-1)
	{
		ptr = ptr->next;
	}
	return ptr->data;
}
main()
{
	if(isQueueFull())
	{
		printf("Queue is Full\n");
	}
	else
	{
		printf("Queue is not Full\n");
	}
	if(isQueueEmpty())
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Queue is not Empty\n");
	}
	printf("\n\n");
	enqueue(12);
	enqueue(13);
	enqueue(14);
	enqueue(15);
	enqueue(16);
	printf("\n\n");
	printf("PeekQueue - %d\n",peekQueue(2));
	printf("\n\n");
	if(isQueueFull())
	{
		printf("Queue is Full\n");
	}
	else
	{
		printf("Queue is not Full\n");
	}
	if(isQueueEmpty())
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Queue is not Empty\n");
	}
	printf("\n\n");
	printf("Dequeue - %d\n",dequeue());
	printf("Dequeue - %d\n",dequeue());
	printf("Dequeue - %d\n",dequeue());
	printf("Dequeue - %d\n",dequeue());
	printf("Dequeue - %d\n",dequeue());
	printf("\n\n");
	if(isQueueFull())
	{
		printf("Queue is Full\n");
	}
	else
	{
		printf("Queue is not Full\n");
	}
	if(isQueueEmpty())
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Queue is not Empty\n");
	}
}
