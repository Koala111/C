#include<stdio.h>

char *replace(char *s1,char *s2,int pos)
{
	int i,j;
	i = 0;
	for(j=pos;s1[j]!='\0';j++)
	if(s2[i]!='\0')
	{
		s1[j]=s2[i];
		i++;
	}
	else
		break;
	return s1;
 } 
 
 main()
 {
 	char string1[100],string2[100];
 	int position;
 	printf("\nPlease input original string:\n");
 	gets(string1);
 	printf("\nPlease input substitute string:\n");
 	gets(string2);
 	printf("\nPlease input substitute position:\n");
 	scanf("%d",&position);
 	replace(string1,string2,position);
 	printf("\nThe final string:%s\n",string1);
 	return 0;
 }
