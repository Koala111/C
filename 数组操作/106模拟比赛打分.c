#include <stdio.h>
#include <stdio.h>

main()
{
	int i,j=1,n;
	float a[100],b[100],sum=0;
	printf("\nEnter the number of players:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("now player %d\n",i);
		printf("please input score:\n");
		for(;j<5*n+1;j++)
		{
			scanf("%f",&a[j]);
			sum+=a[j];
			if(j%5==0)
			{
				break;
			}
			
		}
		b[i]=sum;
		sum=0;
		j++;
	}
	j=1;
	printf("player JudgeA judgeB JudgeC JudegD JudgeE total\n");
	for(i=1;i<=n;i++)
	{
		printf("player %d",i);
		for(;j<5*n+1;j++)
		{
			printf("%8.1f",a[j]);
			if(j%5==0)
			{
				break;
			}
			
		}
		printf("%8.1f\n",b[i]);
		j++;
	}
	return 0;
}
		
