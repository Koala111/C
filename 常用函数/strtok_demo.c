#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if 1
int main()
{
	char str[]="ab,cd,ef";
	char *ptr;
	printf("before strtok:  str=%s\n",str);
	printf("begin:\n");
	ptr = strtok(str, ",");
	while(ptr != NULL){
    	//printf("str=%s\n",str);
    	printf("ptr=%s\n",ptr);
    	ptr = strtok(NULL, ",");
	}
	system("pause");
	return 0;
}
#endif
