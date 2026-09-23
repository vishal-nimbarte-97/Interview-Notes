                                                                                                                                                                                                                                                                                                                                                                                                                                                  #include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *deleteValue(struct Node *head,int value);
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
	
	printf("Before the Deletion Value in the linked list\n\n");
	display(head);
	
	head = deleteValue(head,40);
	printf("\n\nAfter the Deletion Value in the linked list\n\n");
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
struct Node *deleteValue(struct Node *head,int value)
{
	struct Node *p;
	struct Node *q;
	p = head;
	q = head->next;
	
	while(q->data!=value && q->next!=NULL)
	{
		p = p->next;
		q = q->next;
	}
	
	if(q->data==value)
	{
		p->next = q->next;
		free(q);
	}
	return head;
}
