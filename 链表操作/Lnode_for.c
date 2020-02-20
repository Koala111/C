#include <stdio.h>

#if 0
typedef struct student
{
	int num;
	struct student *next;
}LNode,*LinkList;

LinkList create(void)
{
	LinkList head;
	LNode *p1,*p2;
	char a;
	head = NULL;
	a = getchar();
	while(a!='\n')
	{
		p1=(LNode*)malloc(sizeof(LNode));
		p1->num=a;
		if(head==NULL)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
		}
		p2=p1;
		a = getchar();	
	}
	p2->next=head;
	return head;
}

void main()
{
	LinkList L1,head;
	printf("请输入循环链表：\n");
	L1 = create();
	head = L1;
	printf("这个合成的链表是：\n");
	printf("%c",L1->num);
	L1=L1->next;
	while(L1!=head)
	{
		printf("%c",L1->num);
		L1=L1->next;
	 } 
	 printf("\n");
} 
#endif
