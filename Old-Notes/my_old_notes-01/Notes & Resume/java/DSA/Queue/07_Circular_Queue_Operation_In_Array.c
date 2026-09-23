//circular queue using array
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
	if((q->rare+1)%q->size == q->front)
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
		printf("Queue is Full...!\n");
	}
	else
	{
		q->rare = (q->rare + 1) % q->size;
		q->arr[q->rare] = data;
	}
	printf("Enqueue - %d\n",q->arr[q->rare]);
}
int dequeue(struct queue *q)
{
	if(isQueueEmpty(q))
	{
		printf("Queue is Empty...!\n");
	}
	else
	{
		q->front = (q->front + 1)%q->size;
		return q->arr[q->front];
	}
}
main()
{
  struct queue *q = (struct queue*)malloc(sizeof(struct queue));
  q->size = 5;
  q->rare = q->front = 0;
  q->arr = (int*)malloc(q->size * sizeof(int));
  if(isQueueEmpty(q))
  {
    printf("Queue is Empty..!\n");  	
  }	
  else
  {
  	printf("Queue is Not Empty..!\n");
  }
  if(isQueueFull(q))
  {
  	printf("Queue is Full..!\n");
  }
  else
  {
  	printf("Queue is not Full..!\n");
  }
  printf("\n\n");
  enqueue(q,12);
  enqueue(q,13);
  enqueue(q,14);
  enqueue(q,15);
  printf("\n\n");
  if(isQueueEmpty(q))
  {
    printf("Queue is Empty..!\n");  	
  }	
  else
  {
  	printf("Queue is Not Empty..!\n");
  }
  if(isQueueFull(q))
  {
  	printf("Queue is Full..!\n");
  }
  else
  {
  	printf("Queue is not Full..!\n");
  }
  printf("\n\n");
  printf("Dequeue - %d\n",dequeue(q));
  printf("Dequeue - %d\n",dequeue(q));
  printf("Dequeue - %d\n",dequeue(q));
  printf("Dequeue - %d\n",dequeue(q));
  printf("\n\n");
  if(isQueueEmpty(q))
  {
    printf("Queue is Empty..!\n");  	
  }	
  else
  {
  	printf("Queue is Not Empty..!\n");
  }
  if(isQueueFull(q))
  {
  	printf("Queue is Full..!\n");
  }
  else
  {
  	printf("Queue is not Full..!\n");
  }
  printf("\n\n");
  
  printf("\n\n");
  enqueue(q,12);
  enqueue(q,13);
  enqueue(q,14);
  enqueue(q,15);
}
