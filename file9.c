#include <stdio.h>
#include <dir.h>
#if 0
main()
{
	char *ptr,filename[50];
	printf("please input the filename you want to search:\n");
	scanf("%s",filename);
	if((ptr=searchpath(filename))!=NULL)
		printf("the path is:%s\n",ptr);
	else
		printf("cannot find");
}
#endif 
