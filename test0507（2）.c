//��ӡ���������Ƶ�����λ��ż��λ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fun1(int x) {
	int i = 0;
	while (x) {
		x = x & (x - 1);
		i++;
	}
	return i;
}
int main() {
	int x;
	printf("������Ҫ�жϵ�����:\n");
	scanf("%d", &x);
	printf("1�ĸ���:%u\n", fun1(x));
}