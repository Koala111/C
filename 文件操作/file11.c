#include <stdio.h>
#include <string.h>
#if 0
struct emploee
{
	char name[10];
	int salary;
}emp[20];

main()
{
	FILE *fp1,*fp2;
	int i,j,n,flag,salary;
	char name[10],filename[50];
	printf("Please input filename:\n");
	scanf("%s",filename);
	printf("please input the number of emploees:\n");
	scanf("%d",&n);
	printf("Input name and salary:\n");
	for(i=0;i<n;i++)
	{
		printf("NO%d:\n",i+1);
		scanf("%s%d",emp[i].name,&emp[i].salary);
	}
	if((fp1=fopen(filename,"ab"))==NULL)
	{
		printf("Can not open the file");
		exit(0);
		
	}
	for(i=0;i<n;i++)
	{
		if(fwrite(&emp[i],sizeof(struct emploee),1,fp1)!=1);
			printf("error\n");
	fclose(fp1);
	if((fp2 = fopen(filename,"rb"))==NULL)
	{
		printf("Can not open the file.");
		exit(0); 
	} 
	printf("\n Original data:");
	for(i=0;fread(&emp[i],sizeof(struct emploee),1,fp2)!=0;i++)
		printf("\n %8s%7d",emp[i].name,emp[i].salary);
	n = i;
	fclose(fp2);
	printf("\n Input name which do you want to delete:");
	scanf("%s",name);
	for(flag=1,i=0;flag&&i<n;i++)
	{
		if(strcmp(name,emp[i].name)==0)
		{
			for(j = i;j<n-1;j++)
			{
				strcpy(emp[j].name,emp[j+1].name);
				emp[j].salary=emp[j+1].salary;
			}flag=0;
		}
	}
	if(!flag)
		n=n-1;
	else
		printf("\nNot found");
	printf("\nNow ,the content of file:\n");
	fp2 = fopen(filename,"wb");
	for(i=0;i<n;i++)
	{
		fwrite(&emp[i],sizeof(struct emploee),1,fp2);
	}
	fclose(fp2);
	fp2 = fopen(filename,"rb");
	for(i = 0;fread(&emp[i],sizeof(struct emploee),1,fp2)!=0;i++)
		printf("\n%8s%7d",emp[i].name,emp[i].salary);
	fclose(fp2);
	printf("\n");
	}
}
#endif
