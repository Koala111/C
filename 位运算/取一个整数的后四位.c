#include <stdio.h>

void main()
{
	unsigned a,rs;
	printf("请输入一个八进制数：");
	scanf("%o",&a);
	rs=~(~0<<4); //构造一个后四位为1的数 ，就是15这个十进制数，左移4位， 1111111111 ，任何数与1运算会得到本身 
	printf("\n 结果是：0%\n",a&rs);
 } 
