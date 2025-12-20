//CIRCULAR LINK LIST Deletion IN first Node O(1) complexity
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

struct Node *deletion(struct Node *head)
{
	struct Node *ptr = head;
	struct Node *q = head->next;
	struct Node *p = head->next;
	while(p->next!=head)
	{
		p = p->next;
	}
	p = q;
	free(ptr);
	return head;

}
main()
{
  struct Node *head = (struct Node*)malloc(sizeof(struct Node));
  struct Node *second = (struct Node*)malloc(sizeof(struct Node));
  struct Node *third = (struct Node*)malloc(sizeof(struct Node));
  struct Node *four = (struct Node*)malloc(sizeof(struct Node));
  struct Node *five = (struct Node*)malloc(sizeof(struct Node));
  
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
  
  printf("Before Circular Link List Insertion\n\n");
  display(head);
  head = deletion(head);
  printf("\n\nAfter Circular Link List Insertion\n\n");
  display(head);
  	
}
