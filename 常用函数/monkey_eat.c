#include <stdio.h>
#include <malloc.h>

q3_main() {
	int x1,x2,day;
	day = 9;
	x2 = 1;
	while(day > 0) {
		x1 = (x2 + 1)*2;
		x2 = x1;
		day--;
//		printf("%d", day);
//		分别是左对齐（负号）与右对齐 （无负号）
		printf("x1 = %-4d    x2 = %4d\n", x1, x2);
	}
}

q4_main() {
	int x1, x2, day, sum;
	double price;
	x1 = 2;
	day = 1;
	sum = x1;
	do {
		day++;
		x2 = 2 * x1;
		sum = sum + x2;
		printf("第%d天，一共买%3d个,昨天%d个，今天%d个\n",day, sum,x1,x2);
		x1 = x2;
	} while(2*x1 <= 100);
	price = 0.8*sum/day;
	printf("price is %.3f", price);
}

q5_main() {
	int n = 2, day = 0;
	float money = 0, ave;
	while(n < 100) {
		money += 0.8*n;
		day++;
		n*=2;
		printf("%f,%d,%d,\n",money,day,n);
	}

	ave = money/day;
	printf("%f",ave);
}
void q6_main() {
	int i, x, y, z;
	z = 1;
	scanf("%d%d",&x,&y);
	for(i=1; i<=y; i++) {
		z = z*x%1000;
	}
	printf("%d",z);
}
/*
Name:
Copyright:
Author:
Date: 03\02\20 19:40
Description: 快速排序
*/

void Insertion_Sort(int a[],int n) {
	int i,j;
	for(i=1; i<n; i++) {
		int temp=a[i];
		for(j=i; j>0&&a[j-1]>temp; --j)
			a[j]=a[j-1];
		a[j]=temp;
	}
}
int q7_main() {
	int a[]= {1,2,0,3,4,1,13,9,12,52,8};
	int n=sizeof(a)/sizeof(int),i;
	Insertion_Sort(a,n);
	for(i=0; i<n; i++)
		printf("%d ",a[i]);
	return 0;
}
/*
	Name: 
	Copyright: 
	Author: 
	Date: 03\02\20 20:03
	Description: 希尔排序 
*/

void Shell_sort(int *a, int len);   //函数声明

int w1_main(void)
{
    int i;
    int len;
    int * a;
    printf("请输入要排的数的个数：");
    scanf("%d",&len);
    a = (int *)malloc(len * sizeof(int)); // 动态定义数组
    printf("请输入要排的数：\n");
    for (i = 0; i < len; i++) {    //数组值的输入
        scanf("%d",&a[i]);
    }   
    Shell_sort(a, len);    //调用希尔排序函数
    printf("希尔升序排列后结果为：\n");
    for (i = 0; i < len; i++) {   //排序后的结果的输出
        printf("%d\t",a[i]);
    }
    printf("\n");

    return 0;
}
void Shell_sort(int *a, int len)
{
    int i;
    int j;
    int temp;  
    int gap;  //步长
    for (gap = len / 2; gap >= 1; gap /= 2) {  // 步长初始化为数组长度的一半，每次遍历后步长减半
        for (i = 0 + gap; i < len; i += gap) {   //对步长为gap的元素进行直插排序，当gap为1时，就是直插排序
            temp = a[i];  //备份a[i]的值
            j = i - gap;  //j初始化为i的前一个元素（与i相差gap长度）
            while (j >= 0 && a[j] > temp) {
                a[j + gap] = a[j];  //将在a[i]前且比temp的值大的元素向后移动一位
                j -= gap;
            }
            a[j + gap] = temp; 
        }
    }
}

