#include <stdio.h>
main() 
{
	int i,num,k;
	int a[10]={10,11,21,14,41,5,52,6,34,46};
	k=11;
	printf("Please input the member which you want to find:\n");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		if(num==a[i])
			k=i;
	}
	if(k!=11)
		printf("The member you find is in the array\n");
	else
		printf("Have not found the number\n");
}
