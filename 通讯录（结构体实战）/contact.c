#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#define max 100
//�˵�
void menu() {
	printf("***************************************\n");
	printf("********1.add          2.del   ********\n");
	printf("********3.search       4.modify********\n");
	printf("********5.show         0.exit  ********\n");
	printf("********6.sort                 ********\n");
}
//��ʼ��ͨѶ¼
void initcontact(contact*con) {
	assert(con);
	con->count = 0;
	memset(con->data,0,sizeof(con->data));
}

//���ͨѶ¼��Ա
void addconstact(contact* con) {
	assert(con);
	if (con->count == max) {
		printf("ͨѶ¼����\n");
	}
	else {
		printf("���������֣�");
		scanf("%s", &con->data[con->count].name);
		printf("���������䣺");
		scanf("%d", &con->data[con->count].age);
		printf("�������Ա�");
		scanf("%s", &con->data[con->count].sex);
		printf("������绰���룺");
		scanf("%s", &con->data[con->count].tele);
		printf("�������ַ��");
		scanf("%s", &con->data[con->count].adder);

		con->count++;
		printf("�����ϵ�˳ɹ�\n");

	}
}
//��ӡͨѶ¼
void showcontact(contact* con) {
	assert(con);
	int i = 0;
	printf("%20s\t%3s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�","�绰","��ַ");
	for (i = 0; i < con->count; i++) {
		printf("%20s\t%3d\t%5s\t%12s\t%20s\n", con->data[i].name, con->data[i].age,con->data[i].sex,con->data[i].tele,  con->data[i].adder);
			                                 
			                               
	}
}

//ɾ��ͨѶ¼
int findname(contact*con,char name[]) {
	int i = 0;
   for (i = 0; i < con->count; i++) {
		if (0==strcmp(con->data[i].name, name) ) 
		{
			return i;
		}
	 }
   return -1;
}
void delcontact(contact* con) {
//����
	char name[maxname] = { 0 };
	printf("������Ҫɾ���˵�������");
	int i = 0;
	scanf("%s", name);
	if (con->count == 0) {
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	int pos=findname(con, name);
	//ɾ��
	if (pos == -1) {
		printf("��ɾ�����˲�����\n");
	}
	else {
		int i = 0;
		for (i = pos; i < con->count-1 ; i++) {
			con->data[i] = con->data[i + 1];
		}
		con->count--;
		printf("ɾ����ϵ�˳ɹ�\n");
	}
	
}

void searchcontact(contact* con) {
	char name[maxname] = { 0 };
	printf("�������ײ����˵�����");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < con->count; i++) {
		if (strcmp(con->data[i].name, name) == 0) {
			printf("%20s\t%3d\t%5s\t%12s\t%20s\n", con->data[i].name, con->data[i].age, con->data[i].sex, con->data[i].tele, con->data[i].adder);
			printf("���ҵ�����Ա");
			return;
		}
		printf("�Ҳ����ó�Ա\n");
	}
}

//�޸�ͨѶ¼����Ϣ
void modifycontact(contact* con) {
	char name[maxname] = { 0 };
	printf("������Ҫ�޸��˵�����");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < con->count; i++) {
		if (strcmp(con->data[i].name, name) == 0) {
			printf("%20s\t%3d\t%5s\t%12s\t%20s\n", con->data[i].name, con->data[i].age, con->data[i].sex, con->data[i].tele, con->data[i].adder);
			printf("���ҵ�����Ա\n");
			printf("�������޸ĺ����Ϣ\n");
			printf("������޸ĵ�������");
			scanf("%s", con->data[i].name);
			printf("�������޸ĵ�����");
			scanf("%d", &con->data[i].age);
			printf("�������޸ĵ��Ա�");
			scanf("%s", con->data[i].sex);
			printf("������Ҫ�޸ĵĵ绰");
			scanf("%s", con->data[i].tele);
			printf("�������޸ĵĵ�ַ");
			scanf("%s", con->data[i].adder);
			printf("�޸���Ϣ�ɹ�");
			return;
		}
		printf("�Ҳ����ó�Ա\n");
	}
}
//������Ϣ
//����������
int com_people(const void* e1, const void* e2) {
	return   strcmp(((people*)e1)->name, ((people*)e2)->name);
}
void sortconstact(contact* con) {
	assert(con);
	qsort(con->data, con->count, sizeof(con->data[0]), com_people);
	printf("����ɹ�");
}