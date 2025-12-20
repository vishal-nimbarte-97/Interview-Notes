//deletion link list
//DELECTING THE FIRST NODE :- time complexity = O(1) i.e. constant
/*
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
void display(struct Node *ptr);
struct Node *deleteNode(struct Node *head);
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
	
	printf("Brfore the Deleting Node \n\n");
	display(head);
	
	head = deleteNode(head);
	printf("\n\nAfter the Deleting Node \n\n");
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
struct Node *deleteNode(struct Node *head)
{
	struct Node *ptr;
	ptr = head;
	head = head->next;
	free(ptr);
	return head;
}
*/
DELETE NODE CASES
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
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
struct Node *deleteCase01(struct Node *head)
{
	struct Node *ptr;
	ptr = head;
	head = head->next;
	free(ptr);
	return head;
}
struct Node *deleteCase02(struct Node *head,int index)
{
	struct Node *p = head;
	struct Node *q = head->next;
	int i = 0;
	for(i=1;i<index-1;i++)
	{
		p = p->next;
		q = q->next;
	}
	p->next= q->next;
	free(q);
	return head;
}
struct Node *deleteCase03(struct Node *head)
{
	struct Node *p;
	struct Node *q;
	p = head;
	q = head->next;
	
	while(q->next!=NULL)
	{
		p = p->next;
		q = q->next;
	}
	p->next = NULL;
	free(q);
	return head;
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
  ten->next = NULL;
  
  printf("Before Deletion Link List\n\n");
  display(head);
  
  
  //head = deleteCase01(head);//Delete first Node -> Complexity -> O(1)
  //head = deleteCase02(head,3);//Delete Between Node -> Complexity -> O(n)
  head = deleteCase03(head);//Delete end Node -> Complexity -> O(n);
  printf("\n\nAfter Deletion Link List\n\n");
  display(head);
  	
}
