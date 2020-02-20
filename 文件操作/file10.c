#include <stdio.h>
#if 0
//重新命名文件 
void main()
{
	FILE *fp;
	char filename1[20],filename2[20];
	printf("please input the file's name which do you want to change:\n");
	scanf("%s",filename1);
	if((fp = fopen(filename1,"r"))==NULL)
	{
		printf("Cannot open the file %s\n",filename1);
		exit(0);
	}
	else
	{
		printf("Open successful!");
		fclose(fp);
		printf("Please input new name!\n");
		scanf("%s",filename2);
		if(rename(filename1,filename2)==0)
			printf("Rename the file %s successd!\n",filename1);
		else
			printf("Cannot rename the file %s !\n",filename1);	 
	}
}
#endif
