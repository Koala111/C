#include<stdio.h>
#if 0
main()
{
	FILE *fp;
	char str[100],s[100],filename[50];
	printf("please input filename:\n");
	scanf("%s",filename);
	printf("please input string:\n");
	gets(str);
	if((fp=fopen(filename,"wb"))!=NULL)
	{
		fputs(str,fp);//向指定文件写入一个字符串 
		fclose(fp);
	}
	else
	{
		printf("cannot open");
		exit(0);
	}
	if((fp = fopen(filename,"rb"))!=NULL)
	{
		while(fgets(s,sizeof(s),fp))//从指定的文件中读一个字符串到字符数组中 
			printf("%s",s);
		fclose(fp);
	}
}
#endif 
