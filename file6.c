#include<stdio.h>
#if 0
//�ɿ��д���� 
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
		//��buff��ַ��ʼ����Ϣ�����count�Σ�ÿ��дsize�ֽڵ�fpָ����ļ��� 
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
		//��fp��ָ����ļ��ж���count�Σ�ÿ�ζ�size�ֽڣ��������Ϣ����buffer��ַ�� 
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
