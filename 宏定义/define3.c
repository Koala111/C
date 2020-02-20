#include <stdio.h>
#define PWD 1
#if 0
//实现加密处理 
void main() {
	char *s="mrsoft";
#if PWD
	printf("**********");
#else
	printf("%s\n",s);
#endif
}
#endif
