#include <stdio.h>
#define PWD 1
#if 0
//ʵ�ּ��ܴ��� 
void main() {
	char *s="mrsoft";
#if PWD
	printf("**********");
#else
	printf("%s\n",s);
#endif
}
#endif
