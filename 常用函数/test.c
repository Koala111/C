#include<stdio.h>
#include<malloc.h>

void main()
{
	struct st
	{
		int n;
		struct st *next;/*成员结构体类型指针*/
	}*p;
	
	p = (struct st*)malloc(sizeof(struct st)); /*分配一个结构体所需要的空间*/
	p->n=5;
	p->next=NULL;
	printf("p->n=%d\tp->next%x\n",p->n,p->next) ;
	printf("modi");
}
