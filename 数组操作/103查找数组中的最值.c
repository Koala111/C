#include <stdio.h>
main() 
{
	int a[20],max,min,i,j,k,n;
	j=0;k=0;
	printf("please input the number of elements:\n");
	scanf("%d",&n);
	printf("please input the element:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	min=a[0];
	for(i=1;i<n;i++)
		if(a[i]<min)
		{
			min = a[i];
			j=i;
		}
	max = a[0];
	for(i=1;i<n;i++)
		if(a[i]>max)
		{
			max=a[i];
			k=i;
		}
	printf("\nthe %3d of min is:%3d\n",j,min);
	printf("\nthe %3d of max is:%3d\n",k,max);
	return 0;
}
