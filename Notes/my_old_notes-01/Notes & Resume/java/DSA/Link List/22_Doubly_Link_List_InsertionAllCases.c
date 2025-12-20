
#include<stdlib.h>
#include<stdio.h>
struct Node
{
	int data;
	struct Node *pre;
	struct Node *next;
};
void display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
}
void display2(struct Node *ptr)
{
	printf("\n");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->pre;
	}
}
struct Node *insert01(struct Node *head,int data)
{
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = head;
	head = ptr;
	return head;
}
struct Node *insert02(struct Node *head,int data,int index)
{
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	struct Node *p = head;
	int i = 0;
	while(i!=index-1)
	{
		p = p->next;
		i++;
	}
	ptr->next = p->next;
	p->next = ptr;
	return head;
}
struct Node *insert03(struct Node *head,int data)
{
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	struct Node *p = head;
	while(p->next!=NULL)
	{
		p = p->next;
	}
	p->next = ptr;
	ptr->next = NULL;
	return head;
}
struct Node *insert04(struct Node *head,struct Node *preNode,int data)
{
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = preNode->next;
	preNode->next = ptr;
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
	
	printf("Before Inserting the Link List \n\n");
	display(head);
	//head = insert01(head,99);
	//head = insert02(head,99,3);
	//head = insert03(head,99);
	head = insert04(head,third,99);
	printf("\n\nAfter Inserting the Link List \n\n");
	display(head);
    //display2(five);
    
}

