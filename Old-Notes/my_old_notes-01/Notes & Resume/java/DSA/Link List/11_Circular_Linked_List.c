#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
void display(struct Node *head);
main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *four;
	struct Node *five;
	struct Node *six;
	struct Node *seven;
	struct Node *eight;
	struct Node *nine;
	struct Node *ten;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third =  (struct Node*)malloc(sizeof(struct Node));
	four = (struct Node*)malloc(sizeof(struct Node));
	five = (struct Node*)malloc(sizeof(struct Node));
	six = (struct Node*)malloc(sizeof(struct Node));
	seven = (struct Node*)malloc(sizeof(struct Node));
    eight = (struct Node*)malloc(sizeof(struct Node));
	nine = (struct Node*)malloc(sizeof(struct Node));
	ten = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 100;
	head->next = second;
	
	second->data = 200;
	second->next = third;
	
	third->data = 300;
	third->next = four;
	
	four->data = 400;
	four->next = five;
	
	five->data = 500;
	five->next = six;
	
	six->data = 600;
	six->next = seven;
	
	seven->data = 700;
	seven->next = eight;
	
	eight->data = 800;
	eight->next = nine;
	
	nine->data = 900;
	nine->next = ten;
	
	ten->data = 1000;
	ten->next = head;
	
	display(head);
}
void display(struct Node *head)
{
	struct Node *ptr = head;
	do
	{
		printf("Element is %d\n",ptr->data);
		ptr = ptr->next;
	}while(ptr!=head);
}
