#include <stdio.h>
#define main main_prt12

float *search_prt12(float(*p)[4]) 
{
	int i;
	float *pt;
	pt = *(p+1);//��ȡ��һ���׵�ַ 
	for(i=0;i<4;i++)
	{
		if(*(*p+i)<60)//�жϷ����Ƿ�С��60 
		{
			pt = *p;//ָ�����׵�ַ 
		}
	}
	return (pt);//�����׵�ַ 
}
void main()
{
	float score[][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	float *p;//����ָ�����
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
