
/*
//paranthesis matching using the c progrmming
#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int size;
	int top;
	char *arr;
};
//stack is Full or Not
int isFull(struct stack *ptr)
{
	if(ptr->top == ptr->size-1)
	{
		return 1;
	}
	else
    {
    	return 0;
	}
}
//stack is Empty or Not
int isEmpty(struct stack *ptr)
{
	if(ptr->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//pushing the data in the stack
void push(struct stack *ptr,int data)
{
	if(isFull(ptr))
	{
		printf("STACK IS OVERFLOW\n\n");
	}
	else
	{
		ptr->top++;
		ptr->arr[ptr->top] = data; 
	}
}
void pop(struct stack *ptr)
{
	if(isEmpty(ptr))
	{
		printf("STACK IS UNDERFLOW\n\n");
	}
	else
	{
		ptr->top--;
	}
}
int paranthesis(char *exp)
{
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	s->size = 100;
	s->top = -1;
	s->arr = (char*)malloc(s->size*sizeof(char));
	
	int i = 0;
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(')
		{
			push(s,'(');
		}
		else if(exp[i]==')')
		{
			if(isEmpty(s))
			{
				return 0;
			}
			pop(s);
		}
	}
	if(isEmpty(s))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
main()
{
	char *exp = "A+B()";
	if(paranthesis(exp))
	{
		printf("PARANTHESIS IS MATCHING..!");
	}
	else
	{
		printf("PARANTHESIS IS NOT MATCHING..!");
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
 
struct stack
{
    int size;
    int top;
    char *arr;
};
 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
void push(struct stack* ptr, char val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
 
int parenthesisMatch(char * exp){
    // Create and initialize the stack
    struct stack* sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
 
 
    int i = 0;
    for (i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='(')
		{
            push(sp, '(');
        }
        else if(exp[i]==')')
        
		{
            if(isEmpty(sp))
			{
                return 0;
            }
            pop(sp); 
        }
    }
                 
    if(isEmpty(sp))
	{
        return 1;
    }
    else
	{
        return 0;
    }
    
}
int main()
{
    char * exp = "()";
    // Check if stack is empty
    if(parenthesisMatch(exp)){
        printf("The parenthesis is matching");
    }
    else{
        printf("The parenthesis is not matching");
    }
    return 0;
}
*/
