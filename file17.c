#include <stdio.h>
#if 0
main()
{
	FILE *fp;
	char ch, filename[50];
	printf("Please input  filename:\n");
	scanf("%s",filename);
	if((fp = fopen(filename,"w"))==NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	printf("Please input  paragarm(#end):\n");
	ch = getchar();
	while(ch!='#')
	{
		fputc(ch,fp);//��һ���ַ�д�뵽����ȥ 
		ch = getchar();
	}
	fclose(fp);
}
#endif
