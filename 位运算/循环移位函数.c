#include <stdio.h>
#if 1
//左移与右移 
move(unsigned value, int n)
{
	unsigned z;
	if(n>0)
	{
		z = (value>>(32-n))|(value<<n);//全是0结果才是0 
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
	printf("请输入一个八进制数：\n");
	scanf("%o",&a);
	printf("请输入要移位的位数：\n");
	scanf("%d",&n);
	printf("移位后的结果是：%o\n",move(a,n));
}
#endif 
