//PostOrder in binary trees..
//left->right->root
/*
#include"stdio.h"
#include"stdlib.h"
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
struct Node *createNode(int data)
{
	struct Node *ptr;//creating the pointer
	ptr = (struct Node*)malloc(sizeof(struct Node));
	
	ptr->data = data;
	ptr->left = NULL;
	ptr->right = NULL;
	
	printf("%d ",ptr->data);
	return ptr;
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



void preOrder(struct Node *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);//root
		preOrder(root->left);//left
		preOrder(root->right);//right
	}
}
main()
{
	struct Node *p  = createNode(4);
	struct Node *p1 = createNode(1);
	struct Node *p2 = createNode(6);
	struct Node *p3 = createNode(5);
	struct Node *p4 = createNode(2);
	
    //	         p(4)
	//         /     \
	//       p1(1)  p2(6)
	//      /    \
	//    p3(5) p4(3)
	//
	
	printf("\n\n");
	p->left = p1;
	   p1->left = p3;
	   p1->right = p4;
	p->right = p2;
    printf("PostOrder\n\n");
	postOrder(p);
	printf("\n\nPreOrder\n\n");
	preOrder(p);
}
*/

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
	
    printf("%d ",ptr->data);
	
	return ptr;
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
main()
{
	printf("Inpute\n\n");
	struct Node *p  = createNode(4);
	struct Node *p1 = createNode(0);
	struct Node *p2 = createNode(8);
	struct Node *p3 = createNode(3);
	struct Node *p4 = createNode(1);
	struct Node *p5 = createNode(5);
	struct Node *p6 = createNode(6);
	struct Node *p7 = createNode(9);
	struct Node *p8 = createNode(7);
	struct Node *p9 = createNode(3);
	struct Node *p10 = createNode(0);
	
	//finaaly tree look like this..
	
	//                     p(4)
	//             /                 \
	//           p1(0)              p2(8)
	//          /     \          /        \
	//      p3(3)     p4(1)   p5(5)       p6(6)
    //     /   \             /    \                
    //p7(9)  p8(7)        p9(3)  p10(0)         
	
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
	printf("\n\nOutput");
	printf("\n\nPre-Order\n\n");
	preOrder(p);
	printf("\n\nPost-Order\n\n");
	postOrder(p);
	
	return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
struct Node
{
	char data;
	struct Node *left;
	struct Node *right;
};
struct Node *createNode(char data)
{
	struct Node *ptr;
	ptr = (struct Node*)malloc(sizeof(struct Node));
	
	ptr->data = data;
	ptr->left = NULL;
	ptr->right = NULL;
	printf("%c ",ptr->data);
	return ptr;
}
void preOrder(struct Node *root)
{
	if(root!=NULL)
	{
		printf("%c ",root->data);//root
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
		printf("%c ",root->data);//root
	}
}
main()
{
	printf("Inpute\n\n");
	struct Node *p  = createNode('A');
	struct Node *p1 = createNode('B');
	struct Node *p2 = createNode('C');
	struct Node *p3 = createNode('D');
	struct Node *p4 = createNode('E');
	struct Node *p5 = createNode('F');
	struct Node *p6 = createNode('G');
	
		
	//               p(A)
	//          /           \
	//        p1(B)        p2(C)
	//        /               \
	//      p3(D)            p4(E)
	//       /                /
	//     p5(F)           p6(G)

    p->left = p1;
       p1->left = p3;
           p3->left = p5;
    p->right = p2;
       p2->left = p4;
           p4->left = p6;
    printf("\n\nOutput");
	printf("\n\nPre-Order\n\n");
	preOrder(p);
	printf("\n\nPost-Order\n\n");
	postOrder(p);
	
	return 0;
}













