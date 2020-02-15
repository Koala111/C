#include <stdio.h>
#include <string.h> 
#define main main_prt5 
//使用指向指针 的指针对字符串进行排序

sort(char *strings[],int n)
{
	char *temp;//声名字符型指针变量
	int i,j;
	for(i = 0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(strings[i],strings[j])>0)//比较的是ascll 
			{
				temp=strings[i];
				strings[i]=strings[j];
				strings[j]=temp;
			}
		}
	 } 
}
void main()
{
	int n = 5;
	int i;
	char **p;//指向指针的指针变量
	char *strings[]={"赵","钱","孙","李","周"}; 
	p=strings;
	printf("排序前的数组:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",strings[i]);
	 } 
	sort(p,n);
	printf("排序后的数组:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",strings[i]);
	}
	getch();
}
