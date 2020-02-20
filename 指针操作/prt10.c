#include<stdio.h>
#include<conio.h>
#define main main_prt10 
//指向函数的指针变量，用来 存放函数的入口地址 
//返回值为指针
//数组指针 
float *search(float(*p)[4],int n)
{
	float *pt;
	pt = *(p+n);
	return (pt);
}

void main()
{
	float score[][4]={{12,1,4,4},{12,1,4,4},{12,1,4,4},{12,1,4,4}};
	float *p;
	int i,j;
	printf("enter the student number you want to search:");
	scanf("%d",&j);
	printf("This student's scores are:\n");
	p=search(score,j);
	for(i=0;i<4;i++)
	{
		printf("%5.1f\t",*(p+i));
	}
	getch();
}
