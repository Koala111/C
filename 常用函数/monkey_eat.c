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
//		�ֱ�������루���ţ����Ҷ��� ���޸��ţ�
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
		printf("��%d�죬һ����%3d��,����%d��������%d��\n",day, sum,x1,x2);
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
Description: ��������
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
	Description: ϣ������ 
*/

void Shell_sort(int *a, int len);   //��������

int w1_main(void)
{
    int i;
    int len;
    int * a;
    printf("������Ҫ�ŵ����ĸ�����");
    scanf("%d",&len);
    a = (int *)malloc(len * sizeof(int)); // ��̬��������
    printf("������Ҫ�ŵ�����\n");
    for (i = 0; i < len; i++) {    //����ֵ������
        scanf("%d",&a[i]);
    }   
    Shell_sort(a, len);    //����ϣ��������
    printf("ϣ���������к���Ϊ��\n");
    for (i = 0; i < len; i++) {   //�����Ľ�������
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
    int gap;  //����
    for (gap = len / 2; gap >= 1; gap /= 2) {  // ������ʼ��Ϊ���鳤�ȵ�һ�룬ÿ�α����󲽳�����
        for (i = 0 + gap; i < len; i += gap) {   //�Բ���Ϊgap��Ԫ�ؽ���ֱ�����򣬵�gapΪ1ʱ������ֱ������
            temp = a[i];  //����a[i]��ֵ
            j = i - gap;  //j��ʼ��Ϊi��ǰһ��Ԫ�أ���i���gap���ȣ�
            while (j >= 0 && a[j] > temp) {
                a[j + gap] = a[j];  //����a[i]ǰ�ұ�temp��ֵ���Ԫ������ƶ�һλ
                j -= gap;
            }
            a[j + gap] = temp; 
        }
    }
}

