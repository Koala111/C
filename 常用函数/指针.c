#include <stdio.h>
struct Data
{
	int a,b,c;
 } ;

 main()
 {
 	
 	int x;//����һ������x
 	struct Data *p; //����ṹ��ָ��
	struct Data A = {1,2,3 };  /*��������A*/
	
	p = &A; //��pָ��A
	x = p->a; //ȡ��p��ָ��Ľṹ���а��������� ��a��ֵ��x
	printf(x)
  } 
