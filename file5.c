#include <stdio.h>
#if 0
main()
{
	FILE *temp;
	char c;
	if((temp = tmpfile())!=NULL)
		fputs("\nHello world\nHelo mingri",temp);
	rewind(temp);// ���ļ�ָ�뷵���ļ��ײ�
	while((c=fgetc(temp))!=EOF)
		printf("%c",c);
	printf("\n");
	fclose(temp);
			 
 } 
#endif 
