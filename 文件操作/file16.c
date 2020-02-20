#include <stdio.h>
#if 0
main()
{
	FILE *fp;
	char ch, filename[50];
	printf("please input file name:\n");
	gets(filename);
	fp = fopen(filename,"r");
	ch = fgetc(fp);
	while(ch !=EOF)
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	fclose(fp);
 } 
 #endif
