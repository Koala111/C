#include<stdio.h>
#include<io.h>


void main()
{
	int h;
	char filename[20];
	LOOP:
		printf("please input filename:");
		scanf("%s",&filename);
		if(h=creat(filename,0)==-1)
		{
			printf("\nError!Cannot vreat!\n");
			goto LOOP;
		}
		else
		{
			printf("\nThis file has created!\n");
			close(h);
			
		}
		return 0;
}
