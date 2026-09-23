//Checked Binary Serch Tree or not..
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
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
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
int isBST(struct Node *root)
{
	static struct Node *pre = NULL;
	if(root!=NULL)
	{
		if(!isBST(root->left))
		{
			return 0;
		}
		if(pre!=NULL && root->data <= pre->data)
		{
			return 0;
		}
		pre = root;
		return isBST(root->right);
	}
	else
	{
		return 1;
	}
}
main()
{
	struct Node *p  = createNode(9);
	struct Node *p1 = createNode(4);
	struct Node *p2 = createNode(11);
	struct Node *p3 = createNode(2);
	struct Node *p4 = createNode(7);
	struct Node *p5 = createNode(15);
	struct Node *p6 = createNode(5);
	struct Node *p7 = createNode(8);
	struct Node *p8 = createNode(14);
	
    //                 p(9)
	//               /     \
	//            p1(4)   p2(11)
	//            /   \        \
	//         p3(2) p4(7)     p5(15)
	//               /   \       /
	//           p6(5)  p7(8) p8(14)
	//

    p->left = p1;
       p1->left = p3;
       p1->right = p4;
           p4->left = p6;
           p4->right = p7;
	p->right = p2;
	   p2->right = p5;
	   p5->left = p8;
	   printf("\n\n\n");
    inOrder(p);	
    if(isBST(p))
    {
    	printf("\n\nIt's A Binary Serch Tree..\n\n");
	}
	else
	{
		printf("\n\nIt's Not A Binary Serch Tree...\n\n");
	}
}
*/
//checked Binary Serch Tree..
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
   printf("%d ",ptr->data);
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
int isBST(struct Node *root)
{
	static struct Node *pre = NULL;
	if(root!=NULL)
	{
		if(!isBST(root->left))
		{
			return 0;
		}
		if(pre!=NULL && root->data <= pre->data)
		{
			return 0;
		}
		
		pre = root;
		
		return isBST(root->right);
	}
	else
	{
		return 1;
	}
}
main()
{
	struct Node *p   = createNode(13);
	struct Node *p1  = createNode(3);
	struct Node *p2  = createNode(14);
	struct Node *p3  = createNode(1);
	struct Node *p4  = createNode(4);
	struct Node *p5  = createNode(18);
	struct Node *p6  = createNode(2);
	struct Node *p7  = createNode(12);
	struct Node *p8  = createNode(10);
	struct Node *p9  = createNode(5);
	struct Node *p10 = createNode(11);
	struct Node *p11 = createNode(8);
	struct Node *p12 = createNode(7);
	struct Node *p13 = createNode(9);
	struct Node *p14 = createNode(6);
	
	
	//looking the binary trees..
	//                           p(13)
	//                          /    \
	//                      p1(3)    p2(14)
 	//                     /    \        \
	//                 p3(1)    p4(4)     p5(18)
	//                   \         \
	//                   p6(2)     p7(12)
 	//                             /
	//                           p8(10)
	//                           /    \
	//                       p9(5)   p10(11)
	//                          \ 
	//                          p11(8)
	//                          /    \
	//                       p12(7)   p13(9)
	//                         /
	//                       p14(6)
	
	
	//memoty tree
	p->left = p1;
	p1->left = p3;
	p3->right = p6;
	p1->right = p4;
	p4->right = p7;
	p7->left = p8;
	p8->left = p9;
	p9->right = p11;
	p11->left = p12;
	p12->left = p14;
	p11->right = p13; 
	p8->right = p10; 
	p->right = p2;
	p2->right = p5;
	printf("\n\n");
	inOrder(p);
	printf("\n\n");
	if(isBST(p))
	{
		printf("BST");
	}
	else
	{
		printf("NOT BST");
	}
}
