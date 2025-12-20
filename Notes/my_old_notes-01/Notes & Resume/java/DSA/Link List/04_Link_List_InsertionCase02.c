//inserting the node in the between in link list
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;//self replecing the structure
};
void display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
}
struct Node *InserBetween(struct Node *head,int data,int index)
{
	struct Node *ptr ;
	ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node *p;
	p = head;int i = 0;
	while(i!=index-1)
	{
		p = p->next;
		i++;
	}
	ptr->data = data;
	ptr->next = p->next;
	p->next = ptr;
	return ptr;
}
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
	
	head->data = 11;
	head->next = second;
	
	second->data = 13;
	second->next = third;
	
	third->data = 14;
	third->next = four;
	
	four->data = 15;
	four->next = five;
	
	five->data = 16;
	five->next = six;
	
	six->data = 17;
	six->next = NULL;
	
	printf("Before the Inserting link node\n\n");
	display(head);
	InserBetween(head,12,1);
	
	printf("\n\nAfter the Inserting link node\n\n");
	display(head);
}
