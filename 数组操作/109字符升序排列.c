#include <stdio.h>
//显示有问题 
main()
{
	char a[100],b[100],c[200],*p;
	int i = 0,j=0,k=0;
	printf("please input string a:\n");
	scanf("%s",b);
	printf("please input string b:\n");
	scanf("%s",b);
	while(a[i]!='\0'&&b[j]!='\0')
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	c[k]='\0';
	if(a[i]=='\0')
		p=b+j;
	else
		p=a+i;
	strcat(c,p);
	puts(c);	
}
		
