#include <stdio.h>
#define main main_prt2
//ʹ��ָ���������Ԫ�� 
main()
{
	int a[10];//������������
	int *p,i;
	puts("\nPlease input ten integer:\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	} 
	printf("\n");
	for(p=a;p<(a+10);p++){
		printf("%d ",*p);
	}
	puts("\n\nPress any key to quit...");
	getch();
	return 0;
}
