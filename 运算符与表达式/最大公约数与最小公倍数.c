#include <stdio.h>

void main()
{
	int a,b,c,m,t;
	printf("����������������\n");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		t = a;
		a = b;
		b = t;
	}
	m = a*b; //���a��b �ĳ˻� 
	c = a%b; //a��bȡ��Ȼ���c 
	while(c!=0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	printf("���Լ����: \n%d\n",b);
	printf("��С��������: \n%d\n",m/b);
 } 
