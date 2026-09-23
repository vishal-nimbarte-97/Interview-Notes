//peek operation in queue data structure 
#include"stdio.h"
#include"stdlib.h"
//queue is a abstract data type (ADT)
struct queue
{
	int size;
	int front;
	int rare;
	int *arr;
};
int isQueueEmpty(struct queue *q)
{
	
	if(q->front == q->rare)
	return 1;
	return 0;
	
}
int isQueueFull(struct queue *q)
{
	if(q->rare == q->size -1)
	return 1;
	return 0;
}
void enqueue(struct queue *q,int data)
{
	if(isQueueFull(q))
	printf("Queue is Full\n\n");
	else
	{
		q->rare+=1;
		q->arr[q->rare] = data;
	}
}
int dequeue(struct queue *q)
{
	//int a = -1;
	if(isQueueEmpty(q))
	printf("Queue is Empty\n\n");
	else
	{
		q->front+=1;
	}
	return q->arr[q->front];
}
int peekQueue(struct queue *ptr,int pos)
{
	int i = 0;
	for(i=0;i<pos-1;i++)
	{
	ptr->front++;
    }
	return ptr->arr[ptr->front];
}
int lastQueue(struct queue *ptr)
{
	return ptr->arr[ptr->rare];
}
int firstQueue(struct queue *ptr)
{
	ptr->front++;
	return ptr->arr[ptr->front];
}
main()
{
	struct queue q;
	q.size = 5;
	q.front = q.rare = -1;
	q.arr = (int*)malloc(q.size*sizeof(int));
	printf("Queue is Full -> %d\n",isQueueFull(&q));
	printf("Queue is Empty -> %d\n",isQueueEmpty(&q));
    
    //enqueue i.e inesertion data in the queue
    enqueue(&q,11);
    enqueue(&q,22);
    enqueue(&q,33);
    enqueue(&q,44);
    enqueue(&q,55);
    
    printf("Last Of the Queue -> %d\n",firstQueue(&q));
    printf("Last Of the Queue -> %d\n\n",lastQueue(&q));
    
    printf("Position %d -> %d\n",3,peekQueue(&q,3));
}
