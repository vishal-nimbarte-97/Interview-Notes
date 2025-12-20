#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;//self replacing structure
};
void display(struct Node *ptr);
struct Node *InsertAtEnd(struct Node *head,int data);
main()
{
    struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *four;
	struct Node *five;
	struct Node *six;
		
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    four = (struct Node*)malloc(sizeof(struct Node));
    five = (struct Node*)malloc(sizeof(struct Node));
    six = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 10;
    head->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = four;
    
    four->data = 40;
    four->next = five;
    
    five->data = 50;
    five->next = six;
    
    six->data = 60;
    six->next = NULL;
    
    printf("Before the Inserting the ptr Node\n\n");
    display(head);
    
    head = InsertAtEnd(head,70);
    
    printf("\n\nAfter the Inserting the ptr Node\n\n");
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
struct Node *InsertAtEnd(struct Node *head,int data)
{
	struct Node *ptr;
	ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	struct Node *p;
	p = head;
	while(p->next!=NULL)
	{
		p = p->next;
	}
	p->next = ptr;
	ptr->next = NULL;
	return head;
}
