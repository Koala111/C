#include <stdio.h>
#include <string.h> 

void insert(char s[], char t,int i)
{
	char string[100];
	if(!strlen(s))
		string[0] = t;
	else
	{
		strncpy(string,s,i);
		string[i]=t;
		string[i+1]='\0';
		strcat(string,t);
		strcat(string,(s+i));
		strcpy(s,string);
	}
}
main()
{
	char str1[100],c;
	int position;
	printf("please input str1:\n");
	gets(str1);
	printf("please input a char:\n");
	scanf("%c",&c);
	printf("please input position:\n");
	scanf("%d",&position);
	insert(str1,c,position);
	puts(str1);
} 
		
