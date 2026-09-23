//Traversing Linked List
#include<stdio.h>
#include<stdlib.h>
//structure in link list
struct Node
{
	int data;
	struct Node *next;//self replacing structure
};
//future used this function
void TraversingFunction(struct Node *ptr);
//main function in c 
main()
{
	//coustom variable 
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *four;
	struct Node *five;
	
	//variable memory created
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	four = (struct Node*)malloc(sizeof(struct Node));
	five = (struct Node*)malloc(sizeof(struct Node));
	
	//initilizing the data in the link list
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
	
	//Traversing the linked list in usig the function
	TraversingFunction(head);
}
void TraversingFunction(struct Node *ptr)
{
	while(ptr!=NULL)
	{
	printf("Element -> %d\n",ptr->data);
	ptr = ptr->next;
    }
}
