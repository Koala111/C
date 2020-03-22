#include <stdio.h>

int main()
{
	char cString[100];
	int iIndex,iWord=1;
	char cBlank;
	printf("请输入一行句子，然后回车符号结束！！！\n");
	gets(cString);
	if(cString[0]=='\0')
	{
		printf("There is no char!\n");
	}
	else if(cString[0]==' ')
	{
		printf("First char just is a blank!\n");
	}
	else
	{
		for(iIndex=0;cString[iIndex]!='\0';iIndex++)
		{
			cBlank=cString[iIndex];
			if(cBlank==' ')
			{
				iWord++;
			}
		}
		printf("%d\n",iWord);
	}
}
