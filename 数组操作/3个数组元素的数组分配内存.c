#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int* p;
	int i;
	p = (int*)malloc(sizeof(int[3]));/*·ÖÅäÄÚ´æ¿Õ¼ä*/
	for(i = 0;i<3;i++)
	{
		*(p+1) = 10*(1+i);
		printf("%d\n",*(p+1));
	 } 
	 return 0;
}
