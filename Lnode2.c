#include<stdio.h>

#if 0
typedef struct student
{
	char num;
	struct student *next;
}LNode,*LinkList;

LinkList create(void)
{
	LinkList head;
	LNode *p1;
	char a;
	head = NULL;
	printf("请输入链表元素：\n");
	a = getchar();
	while(a!='\n')
	{
		p1=(LinkList)malloc(sizeof(LNode));
		p1->num =a;
		p1->next = head;
		head=p1;
		a=getchar();
	}
	return head;
}

void main()
{
	LinkList L1;
	L1=create();
	printf("这个链表是：\n");
	while(L1)
	{
		printf("%c",L1->num);
		L1=L1->next;
	}
	printf("\n");
}
#endif
