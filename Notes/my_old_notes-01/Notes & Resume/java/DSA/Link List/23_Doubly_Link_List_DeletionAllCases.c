#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *pre;
	struct Node *next;
};
void display(struct Node *head)
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head = head->next;
	}
}
struct Node *delete01(struct Node *head)
{
	struct Node *ptr = head;
	head = head->next;
	free(ptr);
	return head;
}
struct Node *delete02(struct Node *head,int index)
{
	struct Node *p = head;
	struct Node *q = head->next;
	int i = 1;
	while(i!=index-1)
	{
		p = p->next;
		
		q = q->next;
		i++;
	}
	p->next = q->next;
	free(q);
	return head;
}
struct Node *delete03(struct Node *head)
{
	struct Node *p = head;
	struct Node *q = head->next;
	while(q->next!=NULL)
	{
		p = p->next;
		q = q->next;
	}
	p->next = NULL;
	free(q);
	return head;
}
struct Node *delete04(struct Node *head,int value)
{
	struct Node *p = head;
	struct Node *q = head->next;
	
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
	
	head->pre = NULL;
	head->data = 10;
	head->next = second;
	
	second->pre = head;
	second->data = 20;
	second->next = third;
	
	third->pre = second;
	third->data = 30;
	third->next = four;
	
	four->pre = third;
	four->data = 40;
	four->next = five;
	
	five->pre = four;
	five->data = 50;
	five->next = NULL;
	
	printf("Before Deleting Node\n\n");
	display(head);
	
	//head = delete01(head);
	//head = delete02(head,3);
	//head = delete03(head);
	head = delete04(head,30);
	printf("\n\nAfter Deleting Node\n\n");
	display(head);
}

