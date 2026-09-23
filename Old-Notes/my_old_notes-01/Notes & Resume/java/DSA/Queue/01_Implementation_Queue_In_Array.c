
//Implementation in Queue 

#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int size;
	int front;
	int rare;
	int *arr;
};
int isQueueEmpty(struct queue *ptr)
{
	if(ptr->front==ptr->rare)
	return 1;
	return 0;
}
int isQueueFull(struct queue *ptr)
{
	if(ptr->rare==ptr->size-1)
	return 1;
	return 0;
}
main()
{
	struct queue q;
	q.size = 5;
	q.front = q.rare = -1;
	q.arr = (int*)malloc(q.size*sizeof(int));
	if(isQueueEmpty(&q))
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Queue is Not Empty\n");
	}
	if(isQueueFull(&q))
	{
		printf("Queue is Full\n");
	}
	else
	{
		printf("Queue is Not Full\n");
	}
	q.arr[0] = 12;
	q.rare++;
	q.arr[1] = 12;
	q.rare++;
	q.arr[2] = 12;
	q.rare++;
	q.arr[3] = 12;
	q.rare++;
	q.arr[4] = 12;
	q.rare++;
	printf("\n\n");
	if(isQueueEmpty(&q))
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Queue is Not Empty\n");
	}
	if(isQueueFull(&q))
	{
		printf("Queue is Full\n");
	}
	else
	{
		printf("Queue is Not Full\n");
	}
}

/*
#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int size;
	int front;
	int rare;
	int *arr;
};
int isQueueEmpty(struct queue *ptr)
{
	if(ptr->front==ptr->rare)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isQueueFull(struct queue *ptr)
{
	if(ptr->rare == ptr->size - 1)
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
	struct queue *q = (struct queue*)malloc(sizeof(struct queue));
	q->size = 10;
	q->front = q->rare = -1;
	q->arr = (int*)malloc(q->size*sizeof(int));
	if(isQueueEmpty(q))
	{
		printf("Queue is Empty..!\n");
	}
	else
	{
		printf("Queue is not Empty..!\n");
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
	q->arr[0] = 12;
	q->rare++;
	q->arr[0] = 12;
	q->rare++;
	q->arr[0] = 12;
	q->rare++;
	q->arr[0] = 12;
	q->rare++;
	q->arr[0] = 12;
	q->rare++;
	q->arr[0] = 12;
	q->rare++;
	q->arr[0] = 12;
	q->rare++;
	q->arr[0] = 12;
	q->rare++;
	q->arr[0] = 12;
	q->rare++;
	q->arr[0] = 12;
	q->rare++;
	if(isQueueEmpty(q))
	{
		printf("Queue is Empty..!\n");
	}
	else
	{
		printf("Queue is not Empty..!\n");
	}
	if(isQueueFull(q))
	{
		printf("Queue is Full..!\n");
	}
	else
	{
		printf("Queue is not Full..!\n");
	}
}
*/
