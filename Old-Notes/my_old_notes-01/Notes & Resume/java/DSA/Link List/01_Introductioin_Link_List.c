#include<stdio.h>
struct Node
{
	int data;
	struct Node *next;
}
main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
 
    head->data = 12;
	head->next = second;
	
	second->data = 12;
	second->next = third;
	
	third->data = 29;
	third->next = NULL;
	
	printf("%d %d %d ",head->data,second->data,third->data);	
}
