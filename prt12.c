#include <stdio.h>
#define main main_prt12

float *search_prt12(float(*p)[4]) 
{
	int i;
	float *pt;
	pt = *(p+1);//获取下一行首地址 
	for(i=0;i<4;i++)
	{
		if(*(*p+i)<60)//判断分数是否小于60 
		{
			pt = *p;//指向本行首地址 
		}
	}
	return (pt);//返回首地址 
}
void main()
{
	float score[][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	float *p;//声明指针变量
	int i,j;
	for(i=0;i<4;i++)
	{
		p=search_prt12(score+i);
		if(p==*(score+i))
		{
			printf("The student NO.%d list:",i+1);
			for(j=0;j<4;j++,p++)
			{
				printf("%5.1f\n",*p);
			}
		}
	 } 
 } 
