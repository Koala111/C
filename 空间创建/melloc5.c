#include<stdio.h>
#include<stdlib.h>

#if 0
void main()
{
	struct com
	{
		int num;
		char *name;
		int count;
		double price;
	}*commodity;
	commodity=(struct com*)malloc(sizeof(struct com));
	commodity->num=1001;
	commodity->name="ƻ��";
	commodity->count=100;
	commodity->price=2.1;
	printf("���=%d\n ����=%s\n ����=%d\n �۸�=%f\n",commodity->num,commodity->name,commodity->count,commodity->price);
	
}
#endif
