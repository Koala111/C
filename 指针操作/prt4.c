#include<stdio.h>
#define main main_prt4 
//使用指针输出字符串

main()
{
	char *strings[] = {"modi","sorry", "hate" };//指针数组，每个元素就是指针变量 
	char **p;
	int i;
	p=strings;
	for(i=0;i<3;i++)
	{
		printf("string[%d]=%s\n",i,strings[i]);
		printf("*string[%d]=%d\n",i,*strings[i]);
		printf("(p+%d)是%d\n",i,(p+i));//变量对应的名子 
		printf("*(p+%d)是%s\n",i,*(p+i));//取出变量的名子 
		printf("**(p+%d)是%d\n",i,**(p+i));
		printf("\n");
	}
 } 
