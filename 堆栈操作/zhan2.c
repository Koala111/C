#include <stdio.h>
#if 0
#define STACK_SIZE 100
typedef char DataType;

typedef struct
{
	DataType *base;
	DataType *top;
	int stacksize;
}SeqStack;

void Initial(SeqStack *S)
{
	S->base=(DataType*)malloc(STACK_SIZE *sizeof(DataType));
	if(!S->base)
	{
		exit(-1);
	}
	S->top = S->base;
	S->stacksize = STACK_SIZE;
	
}
int IsEmpty(SeqStack *S)
{
	return S->top == S->base;
 } 
int IsFull(SeqStack *S)
{
	return S->top-S->base==STACK_SIZE-1;
 }
void Push(SeqStack *S,DataType x)
{
	if(IsFull(S))
	{
		printf("overflow");
		exit(1);
	}
	else
		*S->top++=x;
 } 
 
void Pop(SeqStack *S)
{
	if(IsEmpty(S))
	{
		printf("NULL");
		exit(1);
	}
	else
		--S->top;
}

DataType Top(SeqStack *S)
{
	if(IsEmpty(S))
	{
		printf("empty");
		exit(1);
	}
	return *(S->top-1);
}

void ClearStack(SeqStack *S)
{
	S->top = S->base;
}

void LineEdit(SeqStack *S)
{
	int i = 0,a[100],n;
	char ch;
	ch = getchar();
	while(ch !='\n')
	{
		i++;
		switch(ch)
		{
			case '#':
				Pop(S);
				i-=2;
				break;
			case '@':
				ClearStack(S);
				i = 0;
				break;
			default:
				Push(S,ch);
		}
		ch = getchar();
	}
	for(n =1;n<=i;n++)
	{
		a[n]=Top(S);
		Pop(S);
		
	}
	for(n = i;n>=1;n--)
	{
		printf("%c",a[n]);
	}
 } 
 
void main()
{
	SeqStack *ST;
	printf("Please input :\n");
	Initial(ST);
	LineEdit(ST);
}
#endif
