#include<stdio.h>
#define N 5
#if 0
struct order
{
	int num;
	int con;
}a[20];

void main()
{
	int i,j;
	printf("请输入5个数：\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i].num);
		a[i].con=0;
	}
	for(i=N-1;i>=1;i--)
		for(j=i-1;j>=0;j--)
			if(a[i].num<a[j].num)
				a[j].con++;
			else
				a[i].con++;
			printf("各数的顺序是：\n");
				for(i=0;i<N;i++)
					printf("%3d%3d\n",a[i].num,a[i].con);
}
#endif
