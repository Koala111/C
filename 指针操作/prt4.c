#include<stdio.h>
#define main main_prt4 
//ʹ��ָ������ַ���

main()
{
	char *strings[] = {"modi","sorry", "hate" };//ָ�����飬ÿ��Ԫ�ؾ���ָ����� 
	char **p;
	int i;
	p=strings;
	for(i=0;i<3;i++)
	{
		printf("string[%d]=%s\n",i,strings[i]);
		printf("*string[%d]=%d\n",i,*strings[i]);
		printf("(p+%d)��%d\n",i,(p+i));//������Ӧ������ 
		printf("*(p+%d)��%s\n",i,*(p+i));//ȡ������������ 
		printf("**(p+%d)��%d\n",i,**(p+i));
		printf("\n");
	}
 } 
