#include <stdio.h>
#include <malloc.h>

#if 0
void main()
{
	int n,*p,*q;
	printf("�������ݵĸ�����");
	scanf("%d",&n); 
	p=(int *)calloc(n,2);
	printf("Ϊ%d�����ݷ����ڴ�ռ�",n);
	for(q=p;q<p+n;q++)
	{
		scanf("%d",q);
		printf("%4d",*q); 
	}
	printf("\n");
}
#endif
