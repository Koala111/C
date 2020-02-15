#include<stdio.h>
#define main main_prt9 
int main(void)
{
	char *Week[]=
	{
		"Monday","Tuesday","Wednesday","Thursday","Friday","Saturdya","Sunday"
	};
	int i;
	printf("Please enter a number for week\n");
	scanf("%d",&i);
	printf("The week is:");
	printf("%s\n",Week[i-1]);
	getch();
	return 0;
	
}
