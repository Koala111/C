#include <stdio.h>

#define main main_prt3
#if 0 
void max_min(int a[],int n, int *max, int *min)
{
	int *p;
	*max = *min = *a;
	for(p=a+1;p<a+n;p++)
	
	if(*p>*max)
		*max = *p;
	else if(*p < *min)
		*min = *p;
	return 0;
}

main()
{
	int i,a[10];
	int max,min;
	printf("input 10 integer numbers you want to operate:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	max_min(a,10,&max,&min);
	printf("\nThe maximum number is:%d\n",max);
	printf("\nThe minimum number is:%d\n",min);
	getch();
	
}
#endif
