#include <stdio.h>

#if 0
union{
	char ch[2];
	int num;
}word;

void main()
{
	word.num=0x1234;
	printf("十六进制数是：%x\n",word.num);
	printf("高字节数是：%x\n",word.ch[1]);
	word.ch[1]='b';
	printf("现在这个 数变为：%x\n",word.num);
}
#endif
