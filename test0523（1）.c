//��������ʹ����ȫ����λ��ż��ǰ�档

//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

#include<stdio.h>

void fun(int *arr1,int n,int *arr2) {
	int i = 0,j = 0;
	int sub = 0;
	for (i = 0; i < n/2; i++) {
		arr2[i] = arr1[sub*2];
		sub++;
	}
	sub = 0;
	for (j = n / 2; j < n; j++) {
		arr2[j] = arr1[sub*2+1];
		sub++;
	}
}

int main() {
	int i = 0;
	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[15] = { NULL };
	int n = sizeof(arr2) / sizeof(arr2[0]);
	fun(arr1, n, arr2);
	for (i = 0; i < n; i++) {
		printf("%x ", arr2[i]);
	}
}