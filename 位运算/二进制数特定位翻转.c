#include <stdio.h>
void main()
{
	unsigned result;
	int a,b;
	printf("������a:");
	scanf("%d",&a);
	b = 15;//��������Ϊ00001111
	result = a^b;//���0���1��1���0
	printf("\n����ǣ�%d\n",result); 
}
