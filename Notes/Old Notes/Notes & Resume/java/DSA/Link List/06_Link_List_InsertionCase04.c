//forth case insert in link list
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;//self replecing structure
};
void display(struct Node *ptr);
struct Node *InsertLinkList(struct Node *head,struct Node *preNode,int data);
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
	four= (struct Node*)malloc(sizeof(struct Node));
	five = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 10;
	head->next = second;
	
	second->data = 20;
	second->next = third;
	
	
	third->data = 40;
	third->next = four;
	
	four->data = 50;
	four->next = five;
	
	five->data = 60;
	five->next = NULL;
	printf("Before the Inserting Node ptr\n\n");
	display(head);
	
	head = InsertLinkList(head,second,30);
	printf("\n\nAfter the Inserting Node ptr\n\n");
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

struct Node *InsertLinkList(struct Node *head,struct Node *preNode,int data)
{
	struct Node *ptr;
	ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	
	//algorithm
	
	ptr->next = preNode->next;
	preNode->next = ptr;
	return head;
}
