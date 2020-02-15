#include <stdio.h>
#include <malloc.h>
#if 0

//创建链表 
struct LNode
{
	int data;
	struct LNode *next;
};

struct LNode *create(int n)
{
	int i;
	struct LNode *head, *p1,*p2;
	int a;
	head = NULL;
	printf("输入整数：\n");
	for(i=n;i>0;--i)
	{
		p1=(struct LNode*)malloc(sizeof(struct LNode));
		scanf("%d",&a);
		p1->data=a;
		if(head == NULL)
		{
			head = p1;
			p2 = p1;
		}
		else
		{
			p2->next=p1;
			p2=p1;
		}
	}
	p2->next=NULL;
	return head;	
}

void main()
{
	int n;
	struct LNode *q;
	printf("输入你想创建的节点个数：");
	scanf("%d",&n) ;
	q=create(n);
	printf("结果是：\n");
	while(q)
	{
		printf("%d ",q->data);
		q=q->next;
	};
	printf("\n");
}


#endif
