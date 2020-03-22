#include<stdio.h>

char del(char s[],int pos,int len)
{
	int i;
	for(i=pos+len-1;s[i]!='\0';i++,pos++)
		s[pos-1]=s[i];
	s[pos-1]='\0';
	return s;
 } 
 
main()
{
	char str[50];
	int position;
	int length;
	printf("\nPlease input string:");
	gets(str);
	printf("\nPlease input delete position:");
	scanf("%d",&position);
	printf("\nPlease input delete length:");
	scanf("%d",&length);
	del(str,position,length);
	printf("\nThe final string:%s\n",str);
}
