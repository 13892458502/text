//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
#include<stdio.h>
#include<stdlib.h>

int fun(int a, int n,int num) {
	if (n == 1) {
		printf("=");
		return a;
	}
	else {
		return a+fun (a * 10+num, n - 1, num);
		printf(" %d +", a);
	}
}

int main() {
	int a = 2, n = 5;
	int num = a;
	printf("%d\n",fun(a, n, num));
}