#include <stdio.h>
main() 
{
	int i,j,sum;
	int a[4][4]={
			{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12},
			{13,14,15,16}
	};
	sum=0;
	printf("The array is:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%5d",a[i][j]);
			if(i==j)
				sum=sum+a[i][j];
		}
		printf("\n");
	}
	printf("The sum of the diagonal is %d\n",sum);
	return 0;
}
