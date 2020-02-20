#include <stdio.h>
#if 0
main()
{
	FILE *temp;
	char c;
	if((temp = tmpfile())!=NULL)
		fputs("\nHello world\nHelo mingri",temp);
	rewind(temp);// 将文件指针返回文件首部
	while((c=fgetc(temp))!=EOF)
		printf("%c",c);
	printf("\n");
	fclose(temp);
			 
 } 
#endif 
