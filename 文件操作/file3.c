#include<stdio.h>
#include<io.h>

#if 0
void main()
{
	int h;
	char filename[20];
	LOOP:
		printf("Please input filename:");
		scanf("%s",&filename);
		if(h=creat(filename,0)==-1)
		{
			printf("\nError! Cannot vreat!\n");
			goto LOOP;
		}
		else
		{
			printf("\n This file has created!\n");
			close(h);
		}
		return 0;
}
#endif
