#include <stdio.h>
#include <stdlib.h>

void main()
{
	struct com
	{
		int num;
		char *name;
		int count;
		double price;
	}*commodity;
	commodity=(struct com*)malloc(sizeof(struct com));/*�����ڴ�ռ�*/
	commodity->num=1001;
	commodity->name="ƻ��";
	commodity->count=100;
	commodity->price=2.1;
	printf("���=%d\n ����=%d\n ����=%d\n �۸�=%d\n",commodity->num,commodity->name,commodity->count,commodity->price); 
} 
