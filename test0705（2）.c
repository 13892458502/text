//�ҵ���
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void single_dog(int *arr,int num) {
	int i = 0, j = 0;
	int temp = 0;
	for (j = 0; j < num; j++) {
		temp = 0;
		for (i = 0; i < num; i++) {
			if (j == i)
				continue;
			else if (arr[j] == arr[i]) {
				temp = 1;
				break;
			}
		}
		if (temp == 0) {
			printf("%d  ", arr[j]);
		}
	}
	printf("\n");
}

int main() {
	printf("����������Ԫ�ظ���: \n");
	int num = 0;
	scanf("%d", &num);
	int *p = (int *)malloc(num * sizeof(int));
	int i = 0;
	for (i = 0; i < num; i++) {
		scanf("%d", p + i);
	}
	single_dog(p, num);
}