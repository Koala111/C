#include <stdio.h>

q_main()
{
	printf("Hello world!");
	printf("\n");
}

q1_main()
{
	int i, n, sum = 0;
	i = 10;
	n = 20;
	sum = i + n;
	printf("%d\n",sum);
}

q2_main()
{
//	�׳˵�ʱ��Ҫ��float���ͣ������������ 
	float sum = 1  ,i = 1;
	for(i; i < 10; i++)
	{
		sum *= i;
//		������������3λС�� 
//	printf("0x%x") //��16���ƴ�ӡ��ַ 
		printf("%.3f\n",sum); 
	}
}
