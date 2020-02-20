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
	commodity=(struct com*)malloc(sizeof(struct com));/*分配内存空间*/
	commodity->num=1001;
	commodity->name="苹果";
	commodity->count=100;
	commodity->price=2.1;
	printf("编号=%d\n 名称=%d\n 数量=%d\n 价格=%d\n",commodity->num,commodity->name,commodity->count,commodity->price); 
} 
