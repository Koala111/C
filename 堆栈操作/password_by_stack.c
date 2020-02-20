#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#if 0
#define STACK_SIZE 100
char PASSWORD[10] = "123456";
typedef char DataType;

typedef struct{
	DataType *base;
	DataType *top;
	int stacksize;
	int length;
}SeqStack;

void Initial(SeqStack *s)
{
	s->base = (DataType *)malloc(STACK_SIZE *sizeof(DataType));
	if(!s->base)exit(-1);
	s->top=s->base;
	s->stacksize=STACK_SIZE;
	s->length=0;
}
//ÅÐ¶ÏÕ»¿Õ
int IsEmpty(SeqStack *S)
{
	return  S->top==S->base;
 } 
 //ÅÐ¶ÏÕ»Âú
int IsFull(SeqStack *S)
{
	return S->top-S->base==STACK_SIZE-1;
 } 
//½øÕ»
void Push(SeqStack *S,DataType x)
{
	if(IsFull(S))
	{
		printf("Õ»ÉÏÒç");
		exit(1);
	}
	*(S->top++)=x;
	++S->length;
	//printf("%c",*S->top);
 } 
//³öÕ»
DataType Pop(SeqStack *S)
{
	if(IsEmpty(S))
	{
		printf("Õ»Îª¿Õ");
		exit(1);
	}
	--(S->length);
	return *--S->top;
 } 
//È¡Õ»¶¥ÔªËØ
DataType GetTop(SeqStack *S,DataType *e) 
{
	if(IsEmpty(S))
	{
		printf("Õ»Îª¿Õ");
		exit(1); 
	}
	*e=*(S->top-1);
	S->top--;
}
void change(SeqStack *s,char *a)
{
	int n=s->length-1;
	while(!IsEmpty(s))
	{
		GetTop(s,&a[n--]);
	}
}

void clearstack(SeqStack *s)
{
	s->top=s->base;
	s->length=0;
}
void PwdSet(SeqStack *s)
{
	int i=0,k,j=0;
	DataType ch,*a;
	k=strlen(PASSWORD);
	printf("input password");
	for(;;)
	{
		if(i>=3)
		{
			i++;
			break;
		}
		else if(i>0&&i<3)
		{
			for(j=1;j<=s->length;j++)printf(" ");
			clearstack(s);
		}
		for(;;)
		{
			ch=getch();
			if(ch!=13)
			{
				if(ch==8){
					Pop(s);
					gotoxy(4+j,2);
					printf(" ");
					gotoxy(4+j,2);
				}
				else{
					printf("*");
					Push(s,ch);
				}
				j=s->length;
			}
			else
			{
				printf("\n");
				break;
			}
		}
		i++;
		if(k!=j)continue;
		else
		{
			a=(DataType *)malloc(s->length *sizeof(DataType));
			change(s,a);
			for(j=1;j<=s->length;)
			{
				if(*(a+j-1)==PASSWORD[j-1])j++;
				else
				{
					j=s->length+2;
					printf("\npassword wrong!\n");
					break;
				}
			}
			if(j==s->length+2)continue;
			else break;
		}
	}
	if(i==4)printf("\n Have no change,it will quit");
	else printf("\npassword right\n");
	free(a);
}
void main()
{
	SeqStack *s;
	clearstack();
	Initial(s);
	PwdSet(s);
	getch();
}
#endif 
