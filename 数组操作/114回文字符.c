#include<stdio.h>
//������Ϣ���� 
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
	printf("����������Ҫ���ַ�����\n") ;
	while((ch=getchar())!='\n')
	{
		str[i]=ch;
		i++;
	}
	if(i%2==0)//ż�� 
	{
		n=palind(str,(i/2),i-1);
	}
	else//���� 
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
