#include <stdio.h>

#if 0
main()
{
	FILE *fp;
	char filename[50];
	printf("please input the file name which do you want to delete:\n");
	scanf("%s",filename);
	if((fp = fopen(filename,"r"))!=NULL)
	{
		printf("Open successfully!\n",filename);
		fclose(fp);
	}
	else
	{
		printf("%s Cannot open!",filename);
		exit(0);
	}
	if(remove(filename)!=0)
		printf("Removed the file %s fail\n",filename);
	else
		printf("Removed successful!\n");
}
#endif 
