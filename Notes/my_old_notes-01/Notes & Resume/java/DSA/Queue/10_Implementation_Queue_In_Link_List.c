//Implemenation of queue in link list used
#include<stdio.h>
#include<stdlib.h>

//structure of the queue using the link list...
struct Node
{
	int data;
	struct Node *next;
};

//Global Declaration
struct Node *front = NULL;
struct Node *rare = NULL;

//queue is empty or not checked.
int isQueueEmpty()
{
	if(front == NULL && rare == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//queue is full or not checked.
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

//main function starting the excugutiong of the queue
main()
{
	if(isQueueEmpty())
	{
		printf("Queue is Empty..\n");
	}
	else
	{
		printf("Queue is NOt Empty..!\n");
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
