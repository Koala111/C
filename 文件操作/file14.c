#include <stdio.h>

#if 0
main()
{
	char ch,filename1[50],filename2[50];
	FILE *fp1,*fp2;
	printf("Please input filename1:\n");
	scanf("%s",filename1);
	if((fp1=fopen(filename1,"a+"))==NULL)
	{
		printf("cannot open\n");
		exit(0);
	}
	printf("file1:\n");
	ch = fgetc(fp1);
	while(ch != EOF)
	{
		putchar(ch);
		ch = fgetc(fp1);	
	}
	printf("\nplease input filename2:\n");
	scanf("%s",filename2);
	if((fp2=fopen(filename2,"r"))=NULL)
	{
		printf("cannot open\n");
		exit(0);
	}
	printf("file2:\n");
	ch = fgetc(fp2);
	while(ch!=EOF)
	{
		putchar(ch);
		ch = fgetc(fp2);
	}
	fseek(fp2,0L,0);
	ch = fgetc
}
#endif
