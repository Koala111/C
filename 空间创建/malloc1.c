#include <stdio.h>
#include <malloc.h>

#if 0
void main()
{
	int n,*p,*q;
	printf("输入数据的个数：");
	scanf("%d",&n); 
	p=(int *)calloc(n,2);
	printf("为%d个数据分配内存空间",n);
	for(q=p;q<p+n;q++)
	{
		scanf("%d",q);
		printf("%4d",*q); 
	}
	printf("\n");
}
#endif
