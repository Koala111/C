#include<stdio.h>

int isprime(int num)
{
	int flag=1,i;
	for(i=2;i<=num/2;i++)
		if(num%i==0)
			flag=0;
	return(flag);
}

main()
{
	int n;printf("input an integer:");
	scanf("%d",&n);
	if(isprime(n))
		printf("%d is a prime",n);
	else
		printf("%d is not a prime",n);
	printf("\n");
}
