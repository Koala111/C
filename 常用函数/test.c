#include<stdio.h>
#include<malloc.h>

void main()
{
	struct st
	{
		int n;
		struct st *next;/*��Ա�ṹ������ָ��*/
	}*p;
	
	p = (struct st*)malloc(sizeof(struct st)); /*����һ���ṹ������Ҫ�Ŀռ�*/
	p->n=5;
	p->next=NULL;
	printf("p->n=%d\tp->next%x\n",p->n,p->next) ;
	printf("modi");
}
