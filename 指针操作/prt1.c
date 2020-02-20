#include <stdio.h>
#define main main_ptr1 
//指向结构体变量的指针 
struct student{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
}; 

void main()
{
	struct student student1={1001,"liming",'M',20,92.5};
	struct student *p;
	p = &student1;
	printf("Number:%d\n",p->num);
}
