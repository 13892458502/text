//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//���ʵ��

//˼·���㷨
//����һ���ṹ������soda[]��Ԫ��soad[n]Ϊһ��ƿ�Ӻ�һ��ƿ��
//��������ƿ������ʱ��������һ������Ԫ��soad[n+1]
//��������Ԫ��ƿ����С��2ʱ��ͳ��ƿ����

#include<stdio.h>

int soda(int n) {
	int sum = n;
	if (n > 1) {
		if (n % 2 == 0)
			sum += 1;
		while (n > 1) {
			if (n % 2 == 0) {
				n = n / 2;
			}
			else {
				n = n / 2 + 1;
			}
			if (n % 2 == 0) {
				sum = sum + n;
			}
			else {
				sum = sum + n - 1;
			}
		}
		return sum;
	}
	else {
		return 1;
	}
}

int main() {
	int num = 100;
	printf("%dԪһ�����Ի�%dƿ��ˮ", num, soda(num));
}

