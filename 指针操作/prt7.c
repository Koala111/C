#include<stdio.h>
#define main main_prt7
connect(char *s,char *t,char *q)
{
	int i = 0;
	for(;*s != '\0';)//只要没有读到最后一个字符 
	{
		*q = *s;
		s++;
		q++;
		printf("%d\n",q);
	}
	for(;*t != '\0';)//只要没有读到最后一个字符 
	{
		*q = *t;
		t++;
		q++;
	}
	*q='\0';
}
int main(void)
{
	char fa[60],*p;
	char str[] = {"One world"};
	char t[] = {"one dream"};
	p=fa;
	printf("The first string is :%s\n",str);
	printf("The second string is :%s\n",t);
	connect(str,t,p);
	printf("The connected string is:\n");
	printf("%s\n",p);
}
