//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�
//֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3^ 3��
//��153��һ����ˮ�ɻ�������



#include<stdio.h>
#include<math.h>
int daffodils(int n) {
	int i = 1;
	int j = 0;
	int count = 1;
	int sum = 0;
	int arr[6] = {0};
	for (i = 0; i < 6; i++) {
		if (n < 10) {
			arr[i] = n;
			break;
		}
		else
			;
		arr[i] = n % 10;
		n /= 10;
		count++;
	}
	for (j = 0; j <=count; j++) {
		sum += (int)pow(arr[j], count);
	}
	return sum;
}

int main() {
	int i;
	for (i = 0; i < 100000; i++) {
		if (daffodils(i) == i)
			printf("%d\n", i);
		else
			;
	}
}