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
	printf("����������Ԫ�أ�\n");
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
	printf("��������ǣ�\n");
	while(L1)
	{
		printf("%c",L1->num);
		L1=L1->next;
	}
	printf("\n");
}
#endif
