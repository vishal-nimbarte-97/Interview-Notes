//Operation in queue in using array
//1.enqueue->insertionElement queue
//2.dequeue->deletion element in queue

#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int size;
	int front;
	int rare;
	int *arr;
};
int isQueueEmpty(struct queue *q)
{
	if(q->front==q->rare)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isQueueFull(struct queue *q)
{
	if(q->rare == q->size -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void enqueue(struct queue *q,int data)
{
	if(isQueueFull(q))
	{
		printf("QUEUE IS FULL..!\n");
	}
	else
	{
		q->rare = q->rare + 1;
		q->arr[q->rare] = data;
	}
}
int dequeue(struct queue *q)
{
	int a = -1;
	if(isQueueEmpty(q))
	{
		printf(" Queue is Empty \n");
	}
	else
	{
		q->front = q->front + 1;
		a = q->arr[q->front];
	}
	return a;
}
//main function in queue
main()
{
	//creating the queue structure
	struct queue q;
	q.size = 10;
	q.front = q.rare = -1;
	q.arr = (int*)malloc(q.size*sizeof(int));
    
	
	//queue is Empty or not checked
	if(isQueueEmpty(&q))
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Queue is Not Empty\n");
	}
	
	//queue is full or not checked
	if(isQueueFull(&q))
	{
		printf("Queue is Full\n");
	}
	else
	{
		printf("Queue is Not Full\n");
	}
	
	//enueue in stack ie.insertion operation
	enqueue(&q,1);
	enqueue(&q,2);
	enqueue(&q,3);
	enqueue(&q,4);
	enqueue(&q,5);
	enqueue(&q,6);
	enqueue(&q,7);
	enqueue(&q,8);
	enqueue(&q,9);
	enqueue(&q,10);
    
	printf("\n\n");
	
	//queue is empty or not checked	
	if(isQueueEmpty(&q))
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Queue is Not Empty\n");
	}
	
	//queue is full or not chedcked
	if(isQueueFull(&q))
	{
		printf("Queue is Full\n");
	}
	else
	{
		printf("Queue is Not Full\n");
	}
	
	//dequeue in stack i.e deletin in stack element
	
	printf("\ndequeue -> %d\n",dequeue(&q));
	printf("\ndequeue -> %d\n",dequeue(&q));
	printf("\ndequeue -> %d\n",dequeue(&q));
	printf("\ndequeue -> %d\n",dequeue(&q));
	printf("\ndequeue -> %d\n",dequeue(&q));
	printf("\ndequeue -> %d\n",dequeue(&q));
	printf("\ndequeue -> %d\n",dequeue(&q));
	printf("\ndequeue -> %d\n",dequeue(&q));
	printf("\ndequeue -> %d\n",dequeue(&q));
	printf("\ndequeue -> %d\n",dequeue(&q));
	
	printf("\n\n");
	
	//queue is empty or not checked	
	if(isQueueEmpty(&q))
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Queue is Not Empty\n");
	}
	
	//queue is full or not chedcked
	if(isQueueFull(&q))
	{
		printf("Queue is Full\n");
	}
	else
	{
		printf("Queue is Not Full\n");
	}
	
}




