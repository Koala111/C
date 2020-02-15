#include <stdio.h>
#if 0
main()
{
	FILE *in,*out;
	char ch,infile[50],outfile[50];
	printf("Enter the infile name:\n");
	scanf("%s",infile);
	printf("Enter the outfile name:\n");
	scanf("%s",outfile);
	if((in=fopen(infile,"r"))==NULL)
	{
		printf("Cannot open infile\n");
		exit(0);
	}
	if((out = fopen(outfile,"w"))==NULL)
	{
		printf("Cannot open outfile\n");
		exit(0);
	}
	ch = fgetc(in);
	while(ch!=EOF)
	{
		fputc(ch,out);
		ch = fgetc(in);
	}
	printf("copy successful\n");
	fclose(in);
	fclose(out);
}
#endif
