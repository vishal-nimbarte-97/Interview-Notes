//using the double linked list in represetation of the binary trees.
/*
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *left;//self replacing structure
	struct Node *right;//self replacing structure
};
main()
{
	//Binary Trees Representaion in using the doubly linked list..
	//    (3)
    //   /  \	
	// (4)  (5)
    
	//constructing the root node	
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
	p->data = 3;
	p->left = NULL;
	p->right = NULL;
	
	//constructing the second node
	struct Node *p1 = (struct Node*)malloc(sizeof(struct Node));
	p1->data = 4;
	p1->left = NULL;
	p1->right = NULL;
	
	//constructing the third node
	struct Node *p2 = (struct Node*)malloc(sizeof(struct Node));
	p2->data = 5;
	p2->left = NULL;
	p2->right = NULL;	
	
	//linking the root bide with left abd right children.
	p->right = p1;
	p->left = p2;
}
*/

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
	struct Node *n;//creating a node pointer
	n = (struct Node*)malloc(sizeof(struct Node));//allocation memory in th heap
	n->data = data;//setting the data
	//printf("%d ",n->data);//printing the data in the binarry trees.
	n->left = NULL;//setting the left children to null
	n->right = NULL;//setting the right children to the null
	printf("%d ",n->data);//printing the data in the binarry trees.
	return n;//finally returning the created node
}

main()
{
	//constructing the root node - using the function createNode(int data);
	struct Node *p = createNode(3);
	
	struct Node *p1 = createNode(4);
	struct Node *p3 = createNode(8);
	struct Node *p4 = createNode(12);
	
	struct Node *p2 = createNode(5);
	struct Node *p5 = createNode(15);
	struct Node *p6 = createNode(55);
	
	
	//linking the root bide with left abd right children.
	p->right = p2;
	
	p1->right = p4;
	p1->left = p3;
	
	p->left = p1;
	
	p2->right = p6;
	p2->left = p5;
}



