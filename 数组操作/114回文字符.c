#include<stdio.h>
//返回信息有误 
int palind(char str[],int k, int i)
{
	if(str[k]==str[i-k]&&k==0)
		return 1;
	else if(str[k]==str[i-k])
		palind(str,k-1,k);
	else
		return 0;
}

main()
{
	int i=0,n = 0;
	char ch,str[20];
	printf("请输入你想要的字符串：\n") ;
	while((ch=getchar())!='\n')
	{
		str[i]=ch;
		i++;
	}
	if(i%2==0)//偶数 
	{
		n=palind(str,(i/2),i-1);
	}
	else//奇数 
	{
		n=palind(str,(i/2-1),i-1);
	}
	printf("%d",n);
	printf("\n");
	if(n==0)
	{
		printf("not palindrome");
	}
	else
	{
		printf("palindrome\n");
	}
	getch();
	return 0;
}
