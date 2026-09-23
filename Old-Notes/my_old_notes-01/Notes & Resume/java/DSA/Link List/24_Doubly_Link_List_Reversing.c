#include<stdio.h>
#include<stdlib.h>
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
		
		printf("  %d  ",ptr->data);
		ptr = ptr->next;
	}
}
void reverse(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("  %d  ",ptr->data);
		ptr = ptr->pre;
	}
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
   
   printf("Before Reversing Link List\n\n");
   display(head);
   printf("\n\nAfter Reversing Link List\n\n");
   reverse(five);
}
