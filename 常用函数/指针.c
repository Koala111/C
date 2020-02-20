#include <stdio.h>
struct Data
{
	int a,b,c;
 } ;

 main()
 {
 	
 	int x;//声明一个变量x
 	struct Data *p; //定义结构体指针
	struct Data A = {1,2,3 };  /*声明变量A*/
	
	p = &A; //让p指向A
	x = p->a; //取出p所指向的结构体中包含的数据 项a赋值给x
	printf(x)
  } 
