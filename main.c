#include"list.h"


int main() 
{
	int num = 0;
	printf("������ִ�б��γ���Ҫ�����ϵ�˵ĸ�����");
	scanf("%d", &num);
	add *list = (add *)calloc((num + 1), sizeof(add));
	int i = 0;
	while (1) 
	{
		menu();
		int select = 0;
		scanf("%d", &select);
		system("cls");
		switch (select)
		{
		case 1:
			while (1)
			{
				add_contact(i, list);
				i++;
				if (end_menu(list) == 0)
					break;
				system("cls");
			}
			break;
		case 2:
			while (1)
			{
				find_contact(list);
				if (end_menu(list) == 0)
					break;
				system("cls");
			}
			break;
		case 3:
			while (1)
			{
				modify_contact(list);
				if (end_menu(list) == 0)
					break;			
				system("cls");
			}
			break;
		case 4:
			while (1) 
			{
				show_allcontact(list, total(list));
				if (end_menu(list) == 0)
					break;
				system("cls");
			}
			break;
		case 5:
			while (1) 
			{
				i = 0;
				delete_contact(list, total(list));
				if (end_menu(list) == 0)
					break;
				system("cls");
			}
			break;
		case 0:
			free(list);
			return 0;
		default:
			printf("���������������������\n");
			break;
		}
		system("cls");
	}
}