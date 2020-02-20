#include <stdio.h>

#if 1
main()
{
	FILE *fp;
	char buffer[80];
	fp = popen("ls","r");
	fgets(buffer,sizeof(buffer),fp);
	printf("%s",buffer);
	pclose(fp);
	printf("success");
}

#endif
