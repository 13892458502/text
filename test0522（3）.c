//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//���ʵ��

//˼·���㷨
//����һ���ṹ������soda[]��Ԫ��soad[n]Ϊһ��ƿ�Ӻ�һ��ƿ��
//��������ƿ������ʱ��������һ������Ԫ��soad[n+1]
//��������Ԫ��ƿ����С��2ʱ��ͳ��ƿ����

#include<stdio.h>
#include<math.h>
void rhombus() {//����һ�����δ�ӡ����
	int i = 0, j = 0;
	int n = 0;
	int befor = 0, after = 0;
	for (j = 1; j <= 7; j++) {//��ӡ�����ϰ��
		befor = 7 - j;
		while (befor > 0) {//����ÿ�пո���
			printf(" ");
			befor--;
		}
		n = j * 2 - 1;
		while (n > 0) {//����ÿ��*��
			printf("*");
			n--;
		}
		printf("\n");//��������
	}
	for (j = 6; j > 0; j--) {//��ӡ�����°��
		befor = 7 - j;
		while (befor > 0) {//����ÿ�еĿո���
			printf(" ");
			befor--;
		}
		n = j * 2 - 1;
		while (n > 0) {//����ÿ�е�*��
			printf("*");
			n--;
		}
		printf("\n");//��������
	}
}
int main() {
	rhombus();
}