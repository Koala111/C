#include <stdio.h>
#include <string.h>
#if 0
#define MAX 101

struct aa
{
	char name[15];
	char tel[15];
};
int readin(struct aa *a)
{
	int i=0,n=0;
	while(1)
	{
		scanf("%s",a[i].name);
		if(!strcmp(a[i].name,"#"))
			break;
		scanf("%s",a[i].tel);
		i++;
		n++; 
	 } 
	 return n;
}

void search_struct2(struct aa *b,char *x,int n)
{
	int i;
	i=0;
	while(1)
	{
		if(!strcmp(b[i].name,x))
		{
			printf("姓名：%s 电话：%s\n",b[i].name,b[i].tel);
			break;
		}
		else
			i++;
		n--;
		if(n==0)
		{
			printf("没有找到");
			break; 
		}
	}
}
void main()
{
	struct aa s[MAX];
	int num;
	char name[15];
	num=readin(s);
	printf("输入姓名：");
	scanf("%s",name);
	search_struct2(s,name,num); 
}
#endif
