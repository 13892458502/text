//����������������������ʱ������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fun(int x, int y) {
	x ^= y;
	y ^= x;
	x ^= y;
	printf("%2d", x, y);
}
int main() {
	int x, y;
	printf("������Ҫ��������������:\n");
	scanf("%d%d", &x, &y);
	fun(x, y);
}