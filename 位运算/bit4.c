#include <stdio.h>
#if 0
void main()
{
	unsigned a,rs;
	printf("请输入一个八进制数：\n");
	scanf("%o",&a);
	rs = ~(~0<<4);//构造一个后四位为1的数 
	printf("\n 结果是：0%o\n",a&rs);//得到后四位的数据 
 } 
 
#endif
