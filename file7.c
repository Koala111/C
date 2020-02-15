#include<stdio.h>
#if 0
struct student_type
{
	char name[10];
	int num;
	int age;
}stud[10];

void save(char *name,int n)
{
	FILE *fp;
	int i;
	if((fp = fopen(name,"wb"))==NULL)
	{
		printf("cannot open file\n");
		exit(0);
	 } 
	for(i=0;i<n;i++)
	{
		if(fwrite(&stud[i],sizeof(struct student_type),1,fp)!=1)
			printf("file write error\n");
		fclose(fp);
	}
} 

main()
{
	int i,n;
	FILE *fp;
	char filename[50];
	printf("please input filename:\n");
	scanf("%s",filename);
	printf("please input the number of students:\n");
	scanf("%d",&n);
	printf("please input name,number,age:\n");
	for(i=0;i<n;i++)
	{
		printf("NO%d",i+1);
		scanf("%s%d%d",stud[i].name,&stud[i].num,&stud[i].age);
		save(filename,n);
	}
	if((fp=fopen(filename,"rb"))==NULL)
	{
		printf("can not open file\n");
		exit(0);
	}
	for(i=0;i<n;i+=2)
	{
		//文件首部SEEK-SET:0	SEEK-CUR:1	SEEK-END:2 
		//fseek(fp,-20L,1) 表示将位置指针从当前位置向后退20个字节 
		fseek(fp,i*sizeof(struct  student_type),0);//移动文件内部的位置指针 
		fread(&stud[i],sizeof(struct student_type),1,fp);
		printf("%-10s%5d%5d\n",stud[i].name,stud[i].num,stud[i].age);
	}
	fclose(fp);
}
#endif
