#pragma once
#ifndef _ADDRESS_LIST_H
#define _ADDRESS_LIST_H

//ʵ��һ��ͨѶ¼��

//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//�ṩ������

//�����ϵ����Ϣ
//ɾ��ָ����ϵ����Ϣ
//����ָ����ϵ����Ϣ
//�޸�ָ����ϵ����Ϣ
//��ʾ������ϵ����Ϣ
//���������ϵ��
//����������������ϵ��

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct addersee_list {
	char name[32];
	char gender[5];
	char age[4];
	char mobile[13];
	char home_add[50];
}add;

typedef struct test {
	char arr[5];
}str;

void menu(void);
void add_contact(int num, add *list);
void exchange(add *list, int a, int b);
void name_sort(add *list,int num);
int total(add *list);
int find_contact(add *list);
void delete_contact(add *list, int num);
void modify_contact(add *list);
void show_allcontact(add *list, int num);
int end_menu(add *list);
int judge_ifnum(char *num);

#endif
