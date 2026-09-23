//Deletion in binary serch tree..
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
	printf("%d ",ptr->data);
	return ptr;
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
struct Node *inOrderPredecessor(struct Node *root)
{
	root = root->left;
	while(root->right!=NULL)
	{
		root = root->right;
	}
	return root;
}
struct Node *deleteNode(struct Node *root, int value){

    struct Node* iPre;
    if (root == NULL){
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL){
        free(root);
        return NULL; 
    }

    //searching for the node to be deleted
    if (value < root->data){
        root-> left = deleteNode(root->left,value);
    }
    else if (value > root->data){
        root-> right = deleteNode(root->right,value);
    }

    //deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}

main()
{
	printf("Inpute\n\n");
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
	   p2->right = p2;
	      p2->right = p5;
	          p5->left = p8;
    printf("\n\nOutput\n\n");
    inOrder(p);
    deleteNode(p,8);
    printf("\n\nDeletion Tree\n\n");
    inOrder(p);
}
/*
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
	struct Node *ptr;
	ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->left = NULL;
	ptr->right = NULL;
	return ptr;
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

struct Node *inOrderPredecessor(struct Node *root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}

struct Node *deleteNode(struct Node *root, int value){

    struct Node* iPre;
    if (root == NULL){
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL){
        free(root);
        return NULL;
    }

    //searching for the node to be deleted
    if (value < root->data){
        root-> left = deleteNode(root->left,value);
    }
    else if (value > root->data){
        root-> right = deleteNode(root->right,value);
    }
    //deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
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
    printf("\n");
    deleteNode(p,8);
    inOrder(p);
}
*/
