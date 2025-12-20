//SErching the Binary Serch Tree..
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
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
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
struct Node *serchBST(struct Node *root,int key)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(key==root->data)
	{
		return root;
	}
	else if(key<root->data)
	{
		return serchBST(root->left,key);
	}
	else
	{
		return serchBST(root->right,key);
	}
}
struct Node *serchBSTIter(struct Node *root,int key)
{
	while(root!=NULL)
	{
		if(root->data == key)
		{
			return root;
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
	return NULL;
}
main()
{
	struct Node *p = createNode(17);
    struct Node *p1 = createNode(13);
	struct Node *p2 = createNode(21);
	struct Node *p3 = createNode(10);
	struct Node *p4 = createNode(15);
	struct Node *p5 = createNode(24);
	struct Node *p6 = createNode(4);
	struct Node *p7 = createNode(11);
	struct Node *p8 = createNode(16);
	struct Node *p9 = createNode(23);
	struct Node *p10 = createNode(27);
	struct Node *p11 = createNode(25);
	struct Node *p12 = createNode(26);
	
	p->left = p1;
	p1->left = p3;
	p3->left = p6;
	p3->right = p7;
	p1->right = p4;
	p4->right = p8;
	p->right = p2;
	p2->right = p5;
	p5->left = p9;
	p5->right = p10;
	p10->left = p11;
	p11->right = p12;
	
	inOrder(p);
	printf("\n\n");
	struct Node *ptr = serchBSTIter(p,26);
	if(ptr!=NULL)
	{
		printf("NUMBER IS FOUND = %d\n");
	}
	else
	{
		printf("NUMBER IS NOT FOUND");
	}
}
