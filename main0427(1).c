#include"test.h"

int main() {
	int arr[50];
	printf("������Ҫ�������������:\n");
	int num;
	scanf("%d", &num);
	printf("������Ҫ���������:\n");
	int i;
	for (i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	Bubble_sort(arr,num);
	printf("��С���������:\n");
	for (i = 0; i < num; i++) {
		printf("%d  ",arr[i]);
	}
	system("pause");
}