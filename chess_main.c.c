#include"chess.h"

int main() {
next:
	Menu();
	int choice;
	int m;
	printf("����������ѡ��:");
again:
	scanf("%d", &choice);
	switch (choice) {
	case(1):
		while (1) {
			Game();
			printf("�Ƿ�Ҫ����һ��? 1������һ�� 2�����ز˵�\n");
			scanf("%d", &m);
			if (m == 2)
				goto next;
			else if (m != 1) {
				printf("�������,������Զ��˳�!");
				Sleep(3000);
				break;
			}
		}
		break;
	case(2):
		break;
	default:
		printf("�������,����������:\n");
		goto again;
	}
}