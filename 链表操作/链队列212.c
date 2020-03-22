#include <stdio.h>
#include <stdlib.h>

#define ElemType int

typedef struct node {
	ElemType data;
	struct node *next;
} quenode;

struct quefr {
	quenode *front,*rear;
};

void creat(struct quefr *q) {
	quenode *h;
	h = (quenode *)malloc(sizeof(quenode));
	h->next=NULL;
	q->front=h;
	q->rear=h;
}

void enqueu(struct quefr *q,int x) {
	quenode *s;
	s=(quenode *)malloc(sizeof(quenode));
	s->data=x;
	s->next=NULL;
	q->rear->next=s;
	q->rear=s;
}

ElemType dequeue(struct quefr *q) {
	quenode *p;
	ElemType x;
	p=(quenode *)malloc(sizeof(quenode));
	if(q->front==q->rear) {
		printf("queue is NULL\n");
		x=0;
	} else {
		p=q->front->next;
		q->front->next=p->next;
		if(p->next==NULL) {
			q->rear=q->front;
		}
		x=p->data;
		free(p);
	}
	return(x);
}

void display(struct quefr dq) {
	quenode *p;
	p=(quenode *)malloc(sizeof(quenode));
	p=dq.front->next;
	while(p!=NULL) {
		printf("data=%d\n",p->data);
		p=p->next;
	}
	printf("———————所有数据显示完毕———————\n");
}

void main() {
	struct quefr *que;
	int n,i,x,sel;
	void display();
	void creat();
	void enqueu();
	ElemType dequeue();
	do {
		printf(" -------------开始---------------\n");
		printf("                1           创建队列   \n");
		printf("                2           向队列中插入元素   \n");
		printf("                3           向队列中删除元素   \n");
		printf("                4           显示队列中元素   \n");
		printf("                5           退出   \n");
		printf(" --------------结束---------------\n");
		printf("请选择（1，2，3，4，5）:") ;
		scanf("%d",&sel);
		switch(sel) {
			case 1:
				que=(struct quefr *)malloc(sizeof(struct quefr));
				creat(que);
				printf("请选择你想创建元素的个数：");
				scanf("%d",&n);
				for(i=1; i<=n; i++) {
					scanf("%d",&x);
					enqueu(que,x);
				}
				break;
			case 2:
				printf("请输入你想要插入的元素: ");
				scanf("%d",&x);
				enqueu(que,x);
				break;
			case 3:
				printf("x=%d\n",dequeue(que));
				break;
			case 4:
				display(*que);
				break;
			case 5:
				exit(0);
		}
	} while(sel<=4);
}
