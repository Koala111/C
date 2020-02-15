#include<stdio.h>

#if 0
main()
{
	FILE *fp1,*fp2,*fp3;
	char file1[20],file2[20],file3[20],ch;
	int file_number;
	printf("Please input file1:");
	scanf("%s",file1);
	printf("File1:\n");
	if((fp1=fopen(file1,"rb"))!=NULL)
	{
		ch=fgetc(fp1);
		while(ch!=EOF)
		{
			putchar(ch);
			ch = fgetc(fp1);
		}
	}
	else
	{
		printf("Can not open!\n");
		exit(1);
	}
	
	printf("Please input file2:");
	scanf("%s",file2);
	printf("File2:\n");
	if((fp2=fopen(file2,"rb"))!=NULL)
	{
		ch=fgetc(fp2);
		while(ch!=EOF)
		{
			putchar(ch);
			ch = fgetc(fp2);
		}
	}
	else
	{
		printf("Can not open!\n");
		exit(1);
	}
	
	printf("Please input file3:");
	scanf("%s",file3);
	printf("File3:\n");
	if((fp1=fopen(file3,"rb"))!=NULL)
	{
		ch=fgetc(fp3);
		while(ch!=EOF)
		{
			putchar(ch);
			ch = fgetc(fp3);
		}
	}
	else
	{
		printf("Can not open!\n");
		exit(1);
	}
//	file_number = fclosell();
	printf("\n %d Files closed\n",file_number);
	return 0;
}
#endif
