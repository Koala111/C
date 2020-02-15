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
//	阶乘的时候要用float类型，否则容易溢出 
	float sum = 1  ,i = 1;
	for(i; i < 10; i++)
	{
		sum *= i;
//		浮点数后面有3位小数 
//	printf("0x%x") //以16进制打印地址 
		printf("%.3f\n",sum); 
	}
}
