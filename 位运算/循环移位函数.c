#include <stdio.h>
#if 1
//���������� 
move(unsigned value, int n)
{
	unsigned z;
	if(n>0)
	{
		z = (value>>(32-n))|(value<<n);//ȫ��0�������0 
	}
	else
	{
		n = -n;
		z = (value<<(32-n))|(value>>n);
	}
	return z;
}

void main()
{
	unsigned a;
	int n;
	printf("������һ���˽�������\n");
	scanf("%o",&a);
	printf("������Ҫ��λ��λ����\n");
	scanf("%d",&n);
	printf("��λ��Ľ���ǣ�%o\n",move(a,n));
}
#endif 
