#include <stdio.h>
#define MAX 50
int main()
{
	int i, num;
	int Chinese[MAX],Math[MAX],English[MAX];
	long StudentID[MAX];
	float average[MAX];
	printf("please input the number of students:");
	scanf("%d",&num);
	printf("Please input a StudentID and three scores:\n");
	printf("StudentID Chinese Math English\n");
	for(i=0;i<num;i++)
	{
		printf("NO.%d>",i+1);
		scanf("%ld%d%d%d",&StudentID[i],&Chinese[i],&Math[i],&English[i]);
		average[i]=(float)(Chinese[i]+Math[i]+English[i])/3;
	}
	puts("\nStudentNum Chinese Math English Average");//�����һ�� 
	for(i=0;i<num;i++)
	{
		//���λ��С��8������Կո�ȫ 
		printf("%8ld%8d%8d%8d%8.2f\n",StudentID[i],Chinese[i],Math[i],English[i],average[i]);
		
	}
	return 0;
}
