#include <stdio.h>
//#undef key //ȡ���궨�� 
#define main main_prt13
void order(int *p,int n)
{
	int i,t,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
	printf("���������飺");
	for(i=0;i<n;i++)
	{
		if(i%5==0)
		{
			printf("\n");
		}
		printf("%5d",*(p+i));
	 } 
	 printf("\n");
}
main()
{
	int a[20],i,n;
	printf("����������Ԫ�صĸ��� ��\n");
	scanf("%d",&n);
	printf("��������� Ԫ��:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	order(a,n);
}
