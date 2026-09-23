//insertion in binary serch tree..
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
struct Node *createNode(int data)
{
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->left = NULL;
	ptr->right = NULL;
    return ptr;
}
void inOrder(struct Node *root)
{
	if(root!=NULL)
	{
		inOrder(root->left);
		printf("%d ",root->data);
		inOrder(root->right);
	}
}
void insert(struct Node *root, int key)
{
	struct Node *prev = NULL;
	while(root!=NULL)
	{
		prev = root;
		if(root->data == key)
		{
			printf("CAN NOT INSERT %d, Already EXIT..",key);
			return;
		}
		else if(key<root->data)
		{
			root = root->left;
		}
		else
		{
			root = root->right;
		}
	}
	struct Node *NEW = createNode(key);
	if(key<prev->data)
	{
		prev->left = NEW;
	}
	else
	{
		prev->right = NEW;
	}
}
main()
{
	struct Node *p  = createNode(8);
	struct Node *p1 = createNode(3);
	struct Node *p2 = createNode(10);
	struct Node *p3 = createNode(1);
	struct Node *p4 = createNode(6);
	struct Node *p5 = createNode(14);
	struct Node *p6 = createNode(4);
	struct Node *p7 = createNode(7);
	struct Node *p8 = createNode(13);
	
    p->left = p1;
       p1->left = p3;
       p1->right = p4;
           p4->left = p6;
           p4->right = p7;
    
    
    p->right = p2;
       p2->right = p5;
           p5->left = p8;
           
    inOrder(p);
    insert(p,9);
    printf("\n\n%d \n\n",p->right->left->data);
    inOrder(p);
	return 0;
}
