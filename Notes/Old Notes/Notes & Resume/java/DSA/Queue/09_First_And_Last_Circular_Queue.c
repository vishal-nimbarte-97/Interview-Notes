//queue first and last element

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
	if(q->front == q->rare)
    return 1;
    return 0;
}
int isQueueFull(struct queue *q)
{
	if((q->rare+1)%q->size == q->front)
	return 1;
	return 0;
}
void enqueue(struct queue *q,int data)
{
	if(isQueueFull(q))
	{
		printf("Queue is Full..!\n");
	}
	else
	{
		q->rare = (q->rare+1)%q->size;
		q->arr[q->rare] = data;
	}
	printf("Enqueue - %d\n",q->arr[q->rare]);
}
int dequeue(struct queue *q)
{
	if(isQueueEmpty(q))
	{
		printf("Queue is Empty..!\n");
		return -1;
	}
	else
	{
		q->front = (q->front+1)%q->size;
        return q->arr[q->front];
	}
}
int peekQueue(struct queue *q,int position)
{
	int i = 0;
	for(i=0;i<position;i++)
	{
		q->front++;
	}
	return q->arr[q->front];
}
int firstQueue(struct queue *q)
{
	q->front+=1;
	return q->arr[q->front];
}
int lastQueue(struct queue *q)
{
	return q->arr[q->rare];
}
main()
{
	struct queue *q = (struct queue*)malloc(sizeof(struct queue));
	q->size = 5;
	q->front = q->rare = 0;
	q->arr = (int*)malloc(q->size*sizeof(int));
	printf("Queue is Empty - %d\n",isQueueEmpty(q));
	printf("Queue is Full  - %d\n",isQueueFull(q));
	printf("\n\n");
	enqueue(q,12);
	enqueue(q,13);
	enqueue(q,14);
	enqueue(q,15);
	printf("\n\n");
	printf("First Element - %d\n",firstQueue(q));
	printf("Last Element - %d\n",lastQueue(q));
	
}
