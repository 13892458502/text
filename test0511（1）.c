//дһ����������������һ���ַ��������ݡ�
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void reverse(int arr[]) {
	int n = SIZE;
	int i;
	int* p = &arr[n-1];
	for (i = 0; i < n; i++) {
		printf("%d ", *(p - i));
	}
}

int main() {
	int arr[SIZE] = { 1,2,3,4,5 };
	reverse(arr);
}