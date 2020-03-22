#include <stdio.h>
void main()
{
	unsigned result;
	int a,b;
	printf("请输入a:");
	scanf("%d",&a);
	b = 15;//二进制数为00001111
	result = a^b;//异或，0变成1，1变成0
	printf("\n结果是：%d\n",result); 
}
