//�˷��ھ���
//*ʵ��һ������,��ӡ�˷��ھ���,�ھ���������������Լ�ָ��
//��:����9,���9 * 9�ھ���,���12,���12 * 12�ĳ˷��ھ���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Multiply_table(int num) {
	int i,j;
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= num; j++) {
			if(i>=j)
			printf("%d*%d=%d ", i, j, (i*j));
		}
		printf("\n");
	}
}
int main(){
	int input;
	printf("Plese enter the num:");
	scanf("%d", &input);
	Multiply_table(input);
	system("pause");
}
