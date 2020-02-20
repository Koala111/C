#include<stdio.h>
main()
{
	FILE *temp;
	char c;
	if((temp = tmpfile())!=NULL)
		fputs("\nHello world\nHello mingri",temp);
	rewind(temp);
	while((c = fgetc(temp))!=EOF)
		printf("%c",c);
	printf("\n");
	fclose(temp);
}
