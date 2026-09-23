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
main()
{
	
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	struct Node *second = (struct Node*)malloc(sizeof(struct Node));
	struct Node *third = (struct Node*)malloc(sizeof(struct Node));
	struct Node *four = (struct Node*)malloc(sizeof(struct Node));
	struct Node *five = (struct Node*)malloc(sizeof(struct Node));
	struct Node *six = (struct Node*)malloc(sizeof(struct Node));
	struct Node *seven = (struct Node*)malloc(sizeof(struct Node));
	struct Node *eight = (struct Node*)malloc(sizeof(struct Node));
	struct Node *nine = (struct Node*)malloc(sizeof(struct Node));
	struct Node *ten = (struct Node*)malloc(sizeof(struct Node));
	
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
	six->next = seven;
	
	seven->data = 70;
	seven->next = eight;
	
	eight->data = 80;
	eight->next = nine;
	
	nine->data = 90;
	nine->next = ten;
	
	ten->data = 100;
	ten->next = head;
	
	printf("Traversing CirCulater Linked List\n\n");
	display(head);
}
