#include <stdio.h>

#if 0
union{
	char ch[2];
	int num;
}word;

void main()
{
	word.num=0x1234;
	printf("ʮ���������ǣ�%x\n",word.num);
	printf("���ֽ����ǣ�%x\n",word.ch[1]);
	word.ch[1]='b';
	printf("������� ����Ϊ��%x\n",word.num);
}
#endif
