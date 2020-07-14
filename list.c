#include"list.h"

void menu(void) 
{
	printf("��ѡ����Ҫִ�еĲ��� \n");
	printf("******************************\n");
	printf("*****  1.�����ϵ����Ϣ  *****\n");
	printf("***  2.����ָ����ϵ����Ϣ  ***\n");
	printf("***  3.�޸�ָ����ϵ����Ϣ  ***\n");
	printf("***  4.��ʾ������ϵ����Ϣ  ***\n");
	printf("***  5.���������ϵ����Ϣ  ***\n");
	printf("***       0.�˳�����       ***\n");
	printf("******************************\n");
}
void add_contact(int num,add *list) 
{
	printf("����������: ");
	scanf("%s", &(list[num].name));
	printf("�������Ա�: ");
	scanf("%s", &(list[num].gender));
	printf("����������: ");
age_again:
	scanf("%s", &(list[num].age));
	if (judge_ifnum(list[num].age) == 0) {
		printf("�����������,������:");
		goto age_again;
	}
	printf("������绰: ");
mobile_again:
	scanf("%s", &(list[num].mobile));
	if (judge_ifnum(list[num].mobile) == 0) {
		printf("�����������,������:");
		goto mobile_again;
	}
	printf("�������ͥסַ: ");
	scanf("%s", &(list[num].home_add));
}
int total(add *list) 
{
	int sum = 0;
	while (1) 
	{
		if (strcmp(list[sum].age,"\0") == 0)
			break;
		else
		sum++;
	}
	return sum;
}
void name_sort(add *list,int num) 
{
	int i = 0, j = 0;
	for(i = 0; i < num-1; i++)
		for (j = 0; j < num-1; j++) 
		{
			if (strcmp(list[j].name, list[j + 1].name) > 0)
				exchange(list, j, j + 1);
		}
}
void exchange(add *list, int a, int b) 
{
	add temp = { 0 };
	add null = { 0 };
	memcpy(&temp, &list[b], sizeof(add));
	memcpy(&list[b], &null, sizeof(add));
	memcpy(&list[b], &list[a], sizeof(add));
	memcpy(&list[a], &null, sizeof(add));
	memcpy(&list[a], &temp, sizeof(add));
}
int find_contact(add *list) 
{
	char _name[32] = { 0 };
	printf("��������Ҫ���ҵ���ϵ������:");
	scanf("%s", &_name);
	int i = 0;
	for (i = 0; i < total(list); i++) 
	{
		if (strcmp(list[i].name, _name) == 0) {
			printf("1.����:%s\n", list[i].name);
			printf("2.�Ա�:%s\n", list[i].gender);
			printf("3.����:%s\n", list[i].age);
			printf("4.�绰:%s\n", list[i].mobile);
			printf("5.��ַ:%s\n", list[i].home_add);
			return i;
		}
	}
	printf("δ�ҵ���ϵ��\n");
	return 0;
}
void delete_contact(add *list, int num)
{
	add null = { 0 };
	int i = 0;
	for (i = 0; i < num; i++) {
		memcpy(&list[i], &null, sizeof(add));
	}

}
void modify_contact(add *list) 
{
	int num = find_contact(list);
	int chooise = 0;
	printf("����������Ҫ�޸���ϵ�˵�ѡ��:");
	scanf("%d", &chooise);
	char item[50] = { 0 };
	printf("������Ҫ�޸ĵ�����:");
	scanf("%s", &item);
	switch (chooise) 
	{
	case 1:
		strcpy(list[num].name, item);
		break;
	case 2:
		strcpy(list[num].gender, item);
		break;
	case 3:
		strcpy(list[num].age, item);
		break;
	case 4:
		strcpy(list[num].mobile, item);
		break;
	case 5:
		strcpy(list[num].home_add, item);
		break;
	default:
		printf("�����������,������ѡ��\n");
		break;
	}
}
void show_allcontact(add *list,int num) 
{
	int i = 0;
	for (i = 0; i < num; i++) 
	{
		printf("����:%s\n", list[i].name);
		printf("�Ա�:%s\n", list[i].gender);
		printf("����:%s\n", list[i].age);
		printf("�绰:%s\n", list[i].mobile);
		printf("��ַ:%s\n", list[i].home_add);
		printf("\n");
	}
}
int end_menu(add *list) 
{
	printf("1.������һ�� 2.�����˲���\n");
	int choice = 0;
start:
	scanf("%d", &choice);
	if (choice == 1)
	{
		name_sort(list, total(list));
		return 0;
	}
	else if (choice == 2)
	{
		return 1;
	}
	else
	{
		printf("��������,����������\n");
		goto start;
	}
}
int judge_ifnum(char *num) {
	while (*num) {
		if ((*num) < '0' || (*num) > '9')
			return 0;
			num++;
	}
	return 1;
}