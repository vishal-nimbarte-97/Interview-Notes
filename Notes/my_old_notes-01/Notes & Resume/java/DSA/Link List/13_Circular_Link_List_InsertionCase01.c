//Circular link list insertio Case : 1- inserting the node in beggining
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
void display(struct Node *head)
{
	struct Node *ptr = head;
	do
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}while(ptr!=head);
}
struct Node *CircularLinkListInserCase01(struct Node *head,int data)
{
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	struct Node *p = head->next;
	while(p->next!=head)
	{
		p=p->next;
	}
	p->next = ptr;
	ptr->next = head;
	head = ptr;
	return head;
}
struct Node *CircularLinkListInserCase02(struct Node *head,int data,int index)
{
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	struct Node *p = head->next;
	int i = 1;
	while(i!=index-1)
	{
		p = p->next;
	}
	ptr->next = p->next;
	p->next = ptr;
	return head;
}
struct Node *CircularLinkListInserCase03(struct Node *head,int data)
{
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	struct Node *p = head->next;
	while(p->next!=head)
	{
		p = p->next;
	}
	p->next = ptr;
	ptr->next = head;
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
	
	head->data = 10;
	head->next = second;
	
	second->data = 20;
	second->next = third;
	
	third->data = 30;
	third->next = four;
	
	four->data = 40;
	four->next = five;
	
	five->data = 50;
	five->next = head;
	
	printf("Before Circular Link List Insert Element\n\n");
	display(head);
	
	//head = CircularLinkListInserCase01(head,99);
	//head = CircularLinkListInserCase02(head,99,2)                                                            ;
      head = CircularLinkListInserCase03(head,77);
	printf("\n\nAfter Circular Link List Insert Element\n\n");
	display(head);
	
	
}

