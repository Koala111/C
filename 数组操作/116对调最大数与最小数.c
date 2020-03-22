#include<stdio.h>

main()
{
	int a[20],max,min,i,j,k,n;
	printf("please input the number of elements:\n");
	scanf("%d",&n);
	printf("please input the element:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	min=a[0];
	for(i=1;i<n;i++)
	if(a[j]<min)
	{
		min=a[i];
		j=i;
	}
	max=a[0];
	for(i=1;i<n;i++)
	if(a[i]>max)
	{
		max=a[i];
		k=i;
	}
	a[k]=min;
	a[j]=max;
	printf("\n the position of min is:%3d\n",j);
	printf("the position of max is :%3d\n",k);
	printf("Now the array is:\n");
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
}
