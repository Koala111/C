#include <stdio.h>
#include <stdlib.h>

#define MAX 100
void Init();
void input();
void Delline();
void List();
int Menu();

typedef struct node {
	char data[50];
	struct node *next;
} strnode;

typedef struct head {
	int number;
	int length;
	strnode *next;
} headnode;

headnode Head[MAX];

void Init() {
	int i;
	for(i=0; i<MAX; i++) {
		Head[i].length=0;
	}
}

int Menu() {
	int i;
	i=0;
	printf("1.Input\n");
	printf("2.Delete\n");
	printf("3.List\n");
	printf("4.Exit\n");
	while(i<=0||i>4) {
		printf("Please choose\n");
		scanf("%d",&i);
	}
	return i;
}

void input() {
	strnode *p,*find();
	int i,j,LineNum;
	char ch;
	while(1) {
		j=-1;
		printf("input the num of line(0~100),101-exit:\n");
		scanf("%d",&LineNum);
		if(LineNum<0||LineNum>=MAX) {
			return;
		}
		printf("Please input,#-end\n");
		i=LineNum;
		Head[i].number=LineNum;
		Head[i].next=(strnode *)malloc(sizeof(strnode));
		p=Head[i].next;
		ch=getchar();
		while(ch!='#') {
			j++;
			if(j>=50) { //如果字符串长度超过50，需要再分配一个节点空间
				p->next=(strnode *)malloc(sizeof(strnode));
				p=p->next;

			}
			p->data[j%50]=ch;
			ch = getchar();
		}
		Head[i].length=j+1;
	}
}

void Delline() {
	strnode *p,*q;
	int i,LineNum;
	while(1) {
		printf("input the number of line which do you want to delete(0-100),101-exit:");
		scanf("%d",&LineNum);
		if(LineNum<0||LineNum>=MAX) {
			return;
		}
		i=LineNum;
		p=Head[i].next;
		if(Head[i].length>0) {
			while(p!=NULL) {
				q=p->next;
				free(p);
				p=q;
			}
			Head[i].length=0;
			Head[i].number=0;
		}
	}
}

void List() {
	strnode *p;
	int i,j,m,n;
	for(i=0; i<MAX; i++) {
		if(Head[i].length>0) {
			printf("line%d:",Head[i].number);
			n=Head[i].length;
			m=1;
			p=Head[i].next;
			for(j=0; j<n; j++) {
				if(j>=50*m) {
					p=p->next;
					m++;
				} else {
					printf("%c",p->data[j%50]);
				}

			}
		}
	}
	printf("\n");
}
void main() {
	int sel;
	Init();
	while(1) {
		sel = Menu();
		switch(sel) {
			case 1:
				input();
				break;
			case 2:
				Delline();
				break;
			case 3:
				List();
				break;
			case 4:
				exit(0);
		}
	}
}
