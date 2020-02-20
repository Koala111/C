#include <stdio.h>


int main()
{
	FILE *fp;
	int len;
	
	fp = fopen("file.txt","r");
	if(fp == NULL)
	{
		perror("open file error");
		return(-1);
	}
	fseek(fp,0,SEEK_END);
	len = ftell(fp);
	fclose(fp);
	printf("file.txt 的总大小=%d字节\n",len);
	
	return(0);
 } 
