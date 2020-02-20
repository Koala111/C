#include <stdio.h>
#define STACK_SIZE 100
typedef int  DataType;
#if 0
typedef struct {
	DataType *base;
	DataType *top;
	int stacksize;
} SeqStack;

void Initial(SeqStack *s) {
	//构造一个指针
	s->base=(DataType *)malloc(STACK_SIZE *sizeof(DataType));
	if(!s->base) exit(-1);
	s->top=s->base;
	s->stacksize=STACK_SIZE;
}
int IsEmpty(SeqStack *S) {
	return S->top=S->base;
}
//判断栈满
int IsFull(SeqStack *S) {
	return S->top-S->base==STACK_SIZE-1;

}
//进栈
void Push(SeqStack *S,DataType x) {
	if(IsFull(S)) {
		printf("栈上溢");
		exit(1);
	}
	*S->top++=x;
}
//出栈
DataType Pop(SeqStack *S)
{
	if(IsEmpty(S))
	{
		printf("栈为空");
		exit(1); 
	}
	return *--S->top;
 } 
 DataType Top(SeqStack *S)
 {
 	if(IsEmpty(S))
 	{
 		printf("栈为空");
		 exit(1); 
	 }
	 return *(S->top-1);
 }

void conversion(int N,int B)
{
	int i;
	SeqStack *S;
	Initial(S);
	while(N){
		Push(S,N%B);
		N=N/B;
	}
	while(!IsEmpty(S)){
		i=Pop(S);
		printf("%d",i);
	}
}

void main()
{
	int n,d;
	printf("Input the integer you want to transform:");
	scanf("%d",&n);
	printf("Input the integer of the system:");
	scanf("%d",&d);
	printf("result:");
	conversion(n,d);
	getch();
}
#endif
