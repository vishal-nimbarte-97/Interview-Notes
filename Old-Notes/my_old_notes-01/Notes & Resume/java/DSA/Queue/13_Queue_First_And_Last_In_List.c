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
int firstQueue()
{
	//front = front->next;
	return front->data;
}
int lastQueue()
{
	return rare->data;
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
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	printf("\n\n");
	printf("PeekQueue - %d\n",peekQueue(1));
	printf("\nfirst Queue - %d\n",firstQueue());
	printf("\nlast Queue - %d\n",lastQueue());
}
