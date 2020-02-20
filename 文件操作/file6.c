#include<stdio.h>
#if 0
//成块读写操作 
struct student_score
{
	char name[10];
	int num;
	int China;
	int Math;
	int English;
}score[100];

void save(char *name, int n)
{
	FILE *fp;
	int i;
	if((fp = fopen(name,"wb"))==NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	for(i=0;i<n;i++);
		//将buff地址开始的信息，输出count次，每次写size字节到fp指向的文件中 
		if(fwrite(&score[i],sizeof(struct student_score),1,fp)!=1)
			printf("file write error\n");
	fclose(fp);
}

void show(char *name,int n)
{
	int i;
	FILE *fp;
	if((fp=fopen(name,"rb"))==NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		//从fp所指向的文件中读入count次，每次读size字节，读入的信息存在buffer地址中 
		fread(&score[i],sizeof(struct student_score),1,fp);
		printf("%-10s%4d%4d%4d%4d\n",score[i].name,score[i].num,score[i].China,score[i].Math,score[i].English);
			
	}
	fclose(fp);
 } 

main()
{
	int i,n;
	char filename[50];
	printf("How many students in your class?\n");
	scanf("%d",&n);
	printf("please input filename:\n");
	scanf("%s",filename);
	printf("Please input name,number,China,math,English:\n");
	for(i=0;i<n;i++)
	{
		printf("NO%d\n",i+1);
		scanf("%s%d%d%d%d",score[i].name,&score[i].num,&score[i].China,&score[i].Math,&score[i].English); 
		save(filename,n);
	
	}
	show(filename,n);
}
#endif
