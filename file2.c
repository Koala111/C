#include<stdio.h>
#include<conio.h>
//#include<windows.h>

#if 0
main()
{
	FILE *fp1,*fp2;
	char filename1[50],filename2[50],a;
	printf("Please input filename1:\n");
	scanf("%s",filename1);
	printf("Please input filename2:\n");
	scanf("%s",filename2);
	fp1 = fopen(filename1,"r");
	fp2 = fopen(filename2,"r");
//	gotoxy(5,3);
	printf("file1:\n");
	a = fgetc(fp1);
	while(!feof(fp1))
	{
		printf("%c",a);
		a = fgetc(fp1);
	}
//	gotoxy(13,3);
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
#endif
