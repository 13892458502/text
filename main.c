#include"winmine.h"

int main() {
	int choice;
	int quit=0;
	Menu();
again:
		scanf("%d", &choice);
		switch (choice) {
		case(1):
			Game();
			printf("��Ҫ����һ����?1.����2.�˳�\n");
			goto again;
		case(2):
			break;
		default:
			printf("�����������,����������!\n");
			goto again;
		}
}