#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *deleteNodelast(struct Node *head);
void display(struct Node *ptr);
main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *four;
	struct Node *five;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	four = (struct Node*)malloc(sizeof(struct Node));
	five = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 10;
	head->next = second;
	
	second->data = 20;
	second->next = third;
	
	third->data = 30;
	third->next = four;
	
	four->data = 40;
	four->next = five;
	
	five->data = 50;
	five->next = NULL;
	
	printf("Before the Delete the last Node\n\n");
	display(head);
	
	head = deleteNodelast(head);
	printf("\n\nAfter the Delete the last Node\n\n");
	display(head);
}
void display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
}
struct Node *deleteNodelast(struct Node *head)
{
	struct Node *p;
	p = head;
	struct Node *q;
	q = head->next;
	
	while(q->next!=NULL)
	{
		p = p->next;
		q = q->next;
	}
	
	p->next = NULL;
	free(q);
	return head;
}
