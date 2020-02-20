#include<stdio.h>
#include<conio.h>

main()
{
	FILE *fp1,*fp2;
	char filename1[50],filename2[50],a;
	printf("please input filename1;\n");
	scanf("%s",filename1);
	printf("please input filename2;\n");
	scanf("%s",filename2);
	fp1 = fopen(filename1,"r");
	fp1 = fopen(filename2,"r");
	gotoxy(5,3);
	printf("file1:\n");
	a = fgetc(fp1);
	while(!feof(fp1))
	{
		printf("%c",a);
		a = fgetc(fp1);
	}
	gotoxy(13,3);
	printf("file2:\n");
	a = fgetc(fp2);
	while(!feof(fp2))
	{
		printf("%c",a);
		a = fgetc(fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return;
}
