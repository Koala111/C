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
	commodity->name="苹果";
	commodity->count=100;
	commodity->price=2.1;
	printf("编号=%d\n 名称=%s\n 数量=%d\n 价格=%f\n",commodity->num,commodity->name,commodity->count,commodity->price);
	
}
#endif
