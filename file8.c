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
		fputs(str,fp);//��ָ���ļ�д��һ���ַ��� 
		fclose(fp);
	}
	else
	{
		printf("cannot open");
		exit(0);
	}
	if((fp = fopen(filename,"rb"))!=NULL)
	{
		while(fgets(s,sizeof(s),fp))//��ָ�����ļ��ж�һ���ַ������ַ������� 
			printf("%s",s);
		fclose(fp);
	}
}
#endif 
