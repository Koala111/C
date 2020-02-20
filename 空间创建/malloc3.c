#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	int *p;
	int i;
	p=(int*)malloc(sizeof(int[3]));
	for(i=0;i<3;i++)
	{
		*(p+i)=10*(1+i);
		printf("%d\n",*(p+i));
	}
	return 0;
}
#endif
