#include"stdio.h"
#include"stdlib.h"
struct stack
{
	int size;
	int top;
	char *arr;
};
int isEmpty(struct stack *ptr)
{
	if(ptr->top==-1)return 1;else return 0;
}
int isFull(struct stack *ptr)
{
	if(ptr->top==ptr->size-1)
	return 1; 
	else return 0;
}
void push(struct stack *ptr,int data)
{
	if(isFull(ptr))printf("stak is overflow\n");
	else
	{
		ptr->top++;
		ptr->arr[ptr->top] = data;
	}
}
int pop(struct stack *ptr)
{
	if(isEmpty(ptr))printf("stack is underflow\n");
	else
	{
		int x = ptr->arr[ptr->top];
		ptr->top--;
		return x;
	}
}
int match(char a,char b)
{
	if(a=='('|| b==')') return 1;
	if(a=='{'|| b=='}') return 1;
	if(a=='['|| b==']') return 1;
	return 0;
}
int paranthesis(char *exp)
{
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	s->size = 100;
	s->top = -1;
	s->arr = (char*)malloc(s->size*sizeof(char));
	char char_ch;
	int i =0;
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
		{
			push(s,exp[i]);
		}
		else if(exp[i]==')'||exp[i]==']'||exp[i]=='}')
		{
			if(isEmpty(s))
			{
				return 0;
			}
			char_ch = pop(s);
			if(!match(char_ch,exp[i]))
			{
				return 0;
			}
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
  char *exp = ")}]";
  if(paranthesis(exp))
  {
  	printf("match");
  }
  else
  {
  	printf("not match");
  }
}
/*
//Multiple paranthesis matching using the c progrmming
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
int pop(struct stack *ptr)
{
	if(isEmpty(ptr))
	{
		printf("STACK IS UNDERFLOW\n\n");
		return -1;
	}
	else
	{
		int x = ptr->arr[ptr->top];
		ptr->top--;
		return x;
	}
}
int match(char a, char b)
{
	if(a=='{' && b=='}')
	{
		return 1;
	}
	if(a=='(' && b==')')
	{
		return 1;
	}
	if(a=='[' && b==']')
	{
		return 1;
	}
	return 0;
}
int paranthesis(char *exp)
{
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	s->size = 100;
	s->top = -1;
	s->arr = (char*)malloc(s->size*sizeof(char));
	char popped_ch;
	
	int i = 0;
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[' )
		{
			push(s,exp[i]);
		}
		else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
		{
			if(isEmpty(s))
			{
				return 0;
			}
			popped_ch = pop(s);
			if(!match(popped_ch,exp[i]))
			{
				return 0;
			}
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
	char *exp = "123{[]()}";
	if(paranthesis(exp))
	{
		printf("PARANTHESIS IS MATCHING..!");
	}
	else
	{
		printf("PARANTHESIS IS NOT MATCHING..!");
	}
}
*/
