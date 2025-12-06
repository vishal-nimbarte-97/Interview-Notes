
//preOreder treein binary trees

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
	struct Node *n;//creating a node of pointer
	n = (struct Node*)malloc(sizeof(struct Node));//Allocating memory in the heap
	n->data = data;//setting the data
	
	n->left = NULL;//setting the left children to NULL
	n->right = NULL;//setting the right children to NULL
	
	printf("%d ",n->data);
	return n;//finally returing the created Node
}
void preOrder(struct Node *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
main()
{
	//Constructing the root node - using the function(recummended)
	struct Node *p  = createNode(4);
	struct Node *p1 = createNode(1);
	struct Node *p2 = createNode(6);
	struct Node *p3 = createNode(5);
	struct Node *p4 = createNode(2);
	//finally the tree looks like this:
	//       4
	//      / \
	//     1   6
	//    / \
	//   5   2
	
	//linking the root node wih left and right children
	
	p->left = p1;
	
	p1->left = p3;
	p1->right = p4;
	
	p->right = p2;
	
	printf("\n");
	preOrder(p);
	
	return 0;
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
	struct Node *ptr;//creating the node pointer
	ptr = (struct Node*)malloc(sizeof(struct Node));//allocating the memory in the heap
	
	ptr->data = data;//inserting the data
	
	ptr->left = NULL;
	ptr->right = NULL;
	
	printf("%d ",ptr->data);
	return ptr;
}
void preOrder(struct Node *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
main()
{
	printf("printing the data\n\n");
	
    struct Node *p = createNode(4);
	struct Node *p1 = createNode(0);
	struct Node *p2 = createNode(8);
    struct Node *p3 = createNode(3);
	struct Node *p4 = createNode(1);
	struct Node *p5 = createNode(5);
    struct Node *p6= createNode(6);
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
	  
	  
	printf("\n\n");
	preOrder(p);//pass the root in preOrder function..
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
		printf("%c ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
main()
{
	
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
      p2->right = p4;
      p4->left = p6;

    printf("\n");
    preOrder(p);
}













