//
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//
//����Ϊ4�����ɷ��Ĺ��� :
//
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

#include<stdio.h>

//int main() {
//	char killer = 'A';
//	int num = 0;
//	for (killer = 'A'; killer <= 'D'; killer++) 
//	{
//		num = 0;
//		if (killer != 'A')
//			num++;
//		if (killer == 'C')
//			num++;
//		if (killer == 'D')
//			num++;
//		if (killer != 'D')
//			num++;
//		if (num == 3)
//			printf("������:%c\n", killer);
//	}
//}

int main() {
	char killer = '\0';
	for (killer = 'A'; killer <= 'D'; killer++) {
		if ((killer != 'A') + (killer == 'C')\
			+ (killer == 'D') + (killer != 'D') == 3)
			printf("killer is: %c", killer);
	}
}