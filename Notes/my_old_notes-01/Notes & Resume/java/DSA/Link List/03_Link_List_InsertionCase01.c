
//insert Node the for Begging
/*
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
    struct Node *next;
};
void Traversing(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("Element -> %d\n",ptr->data);
		ptr = ptr->next;
	}
}
struct Node *insertAtfirst(struct Node *head,int data)
{
	struct Node *ptr;
	ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->next = head;
	ptr->data = data;
	head = ptr;
	//return ptr;
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
	five->next = NULL;
	
	Traversing(head);
	printf("\n");
    
	head = insertAtfirst(head,99);
	Traversing(head);
}
*/

/*
#include"stdio.h"
#include"stdlib.h"
typedef struct Node
{
	int data;
	struct Node *next;//self refresing structure
}Node;
void display(Node *ptr);
Node *InsertingLinkList(Node *ptr,int data);
main()
{
//	struct Node *head;
//	struct Node *second;
//	struct Node *third;
//	struct Node *four;
//	struct Node *five;
    Node *head = (Node*)malloc(sizeof(Node));
    Node *second = (Node*)malloc(sizeof(Node));
    Node *third = (Node*)malloc(sizeof(Node));
    Node *four = (Node*)malloc(sizeof(Node));
    Node *five = (Node*)malloc(sizeof(Node));
    
	head->data = 100;
	head->next = second;
	
	second->data = 200;
	second->next = third;
	
	third->data = 300;
	third->next = four;
	
	four->data = 400;
	four->next = five;
	
	five->data = 500;
	five->next = NULL;
	printf("Before Inserting Link List\n\n");
	display(head);
	printf("\n\nAfter Inserting Link List\n\n");
	head = InsertingLinkList(head,600);
	display(head);	 
}
void display(Node *ptr)
{
	while(ptr!=NULL)
	{
	printf("%d ",ptr->data);
	ptr = ptr->next;
    }
}
Node *InsertingLinkList(Node *head,int data)
{
	Node *ptr;
	ptr = (Node*)malloc(sizeof(Node));
	ptr->next = head;
	ptr->data = 600;
	head = ptr;
	return head;
}
*/

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
struct Node *insertCase01(struct Node *head,int data)
{
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = head;
	head = ptr;
	return head;
}
struct Node *insertCase02(struct Node *head,int data,int index)
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
struct Node *insertCase03(struct Node *head,int data)
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
struct Node *insertCase04(struct Node *head,struct Node *second,int data)
{
  struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
  ptr->data = data;
  ptr->next = second->next;
  second->next = ptr;
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
	seven->next = NULL;
	
	printf("Before Inserting Element \n\n");
	display(head);
	
	//head = insertCase01(head,99);//case 1 :insertion at Beginning complexity - O(1)
    //head = insertCase02(head,99,4);//case 2 :insertion at between complexity - O(n)
    //head = insertCase03(head,99);//case 3 : insertion at end complexity - O(n)
    head = insertCase04(head,four,99);//insertion after a Node complexity - O(1)
	printf("\n\nAfter Inserting Element \n\n");
	display(head);
	
}

