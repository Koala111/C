#include <stdio.h>

int main()
{
	int i,v0=0,v1=0,v2=0,v3=0,n,a[50];
	printf("please input the number of electorate:\n");
	scanf("%d",&n);
	printf("please input 1or2or3\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			v1++;
		}
		else if(a[i]==2)
		{
			v2++;
		}
		else if(a[i]==3)
		{
			v3++;
		}
		else
		{
			v0++;
		}
	}
	printf("The Result:\n");
	printf("candidate1:%d\ncandidate2:%d\ncandidate3:%d\ncandidate4:%d\n",v1,v2,v3,v0);
	return 0;
}
