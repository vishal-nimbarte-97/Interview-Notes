//Write a programe which prints the nodes of T in (a) preOrder , postOrder and inOrder.
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
	struct Node *root = (struct Node*)malloc(sizeof(struct Node));
	root->data = data;
	printf("%d ",root->data);
	root->left = NULL;
	root->right = NULL;
	return root;
}
void preOrder(struct Node *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);//root
		preOrder(root->left);//left
		preOrder(root->right);//right
	}
}
void postOrder(struct Node *root)
{
	if(root!=NULL)
	{
		postOrder(root->left);//left
		postOrder(root->right);//right
		printf("%d ",root->data);//root
	}
}
void inOrder(struct Node *root)
{
	if(root!=NULL)
	{
		inOrder(root->left);//left
		printf("%d ",root->data);//root
		inOrder(root->right);//right
	}
}
main()
{
	printf("Inpute\n\n");
	struct Node *p  = createNode(10);
	struct Node *p1 = createNode(8);
	struct Node *p2 = createNode(15);
	struct Node *p3 = createNode(4);
	struct Node *p4 = createNode(9);
	struct Node *p5 = createNode(13);
	struct Node *p6 = createNode(17);
	struct Node *p7 = createNode(3);
	struct Node *p8 = createNode(5);
	struct Node *p9 = createNode(12);
	struct Node *p10 = createNode(14);
	struct Node *p11 = createNode(16);
	struct Node *p12 = createNode(18);
	
	p->left = p1;
	   p1->left = p3;
	      p3->left = p7;
	      p3->right = p8;
	   p1->right = p4;
	p->right = p2;
	   p2->left = p5;
	      p5->left = p9;
	      p5->right = p10;
	   p2->right = p6;
	      p6->left = p11;
	      p6->right = p12;
	printf("\n\npreOrder Output\n\n"); 
    preOrder(p);
    printf("\n\npostOrder Output\n\n");
    postOrder(p);
    printf("\n\ninOrder Output\n\n");
    inOrder(p);
}
