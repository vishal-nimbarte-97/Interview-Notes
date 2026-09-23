//programming concept
#include<stdio.h>
main()
{
	int a = 0;
	int i = 0;
//	for(i=1;i<=10;i++)
//	{
//      printf("%d\n",i);//linearly looping 
//	}
    for(i=1;i<=10;i++)
    {
    	printf("%d\n",i%5);
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
	if(ptr->rare == ptr->size -1 )
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
		printf("Queue is Full\n");
	}
	else
	{
      q->rare++;
      q->arr[q->rare] = data;
	}
	printf("%d\n",q->arr[q->rare]);
}
int dequeue(struct queue *q)
{
	if(isQueueEmpty(q))
	{
		printf("Queue is Empty\n");
	}
	else
	{
		q->front++;
	}
	return q->arr[q->front];
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
	
	printf("enqueue\n");
	
	enqueue(&q,11);
	enqueue(&q,12);
	enqueue(&q,13);
	enqueue(&q,14);
	enqueue(&q,15);
	
	printf("dequeue \n");
	printf("%d\n",dequeue(&q));
	printf("%d\n",dequeue(&q));
	printf("%d\n",dequeue(&q));
	printf("%d\n",dequeue(&q));
	printf("%d\n",dequeue(&q));
    
	q.size = 0;//concept ..!
		
	//concept 
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
//Why used of the circular queue using array..!
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
	if(ptr->rare == ptr->size -1 )
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
		printf("Queue is Full\n");
	}
	else
	{
      q->rare++;
      q->arr[q->rare] = data;
	}
	printf("%d\n",q->arr[q->rare]);
}
int dequeue(struct queue *q)
{
	if(isQueueEmpty(q))
	{
		printf("Queue is Empty\n");
	}
	else
	{
		q->front++;
	}
	return q->arr[q->front];
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
	
	printf("enqueue\n");
	
	enqueue(&q,11);
	enqueue(&q,12);
	enqueue(&q,13);
	enqueue(&q,14);
	enqueue(&q,15);
	
	printf("dequeue \n");
	printf("%d\n",dequeue(&q));
	printf("%d\n",dequeue(&q));
	printf("%d\n",dequeue(&q));
	printf("%d\n",dequeue(&q));
	printf("%d\n",dequeue(&q));
	
	//concept 
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
*/
