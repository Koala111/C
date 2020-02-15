#include <stdio.h>
#if 0
//格式化读写文件
 
main()
{
	int i,flag = 1;
	char str[80],filename[50];
	FILE *fp;
	printf("please input filename:\n");//下次数据会被覆盖 
	scanf("%s",filename);
	if((fp = fopen(filename,"w"))==NULL)
	{
		printf("cannot open!");
		exit(0);
	}
	while(flag == 1)
	{
		printf("\nInput string:\n");
		scanf("%s",str);
		fprintf(fp,"%s\n",str);//可以实现换行输入 
		printf("\nContinue:?");
		if((getchar()=='N')||(getchar()=='n'))
		{
			flag=0;
		}
	}
	fclose(fp);
	fp = fopen(filename,"r");
	while(fscanf(fp,"%s",str)!=EOF)
	{
		for(i=0;str[i]!='\0';i++)
		{
			if((str[i]>='a')&&(str[i]<='z'))
			{
				str[i]-=32;
			}
		}
		printf("\n%s\n ",str);
	}
	fclose(fp);
	return 0;
 } 
#endif
