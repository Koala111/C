#include <stdio.h>
#include <malloc.h>
#if 0
void main()
{
	struct st
	{
		int n;
		struct st *next;
	 }*p;
	 p=(struct st*)malloc(sizeof(struct st));
	 p->n=5;
	 p->next=NULL;
	 printf("p->n=%d\tp->next=%x\n",p->n,p->next);
} 
#endif
