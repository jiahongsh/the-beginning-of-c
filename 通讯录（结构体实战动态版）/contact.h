#pragma once
#define maxname 20
#define maxsex 10
#define maxtele 12
#define maxadder 30
//��ӡ�˵�
void menu();
//ͨѶ¼��ÿ����
typedef struct people {
	char name[maxname];
	int age;
	char sex[maxsex];
	char tele[maxtele];
	char adder[maxadder];
}people;
//ͨѶ¼
typedef struct contact {
	people* data;//ͨѶ¼�е���Ϣ
	int count;//ͨѶ¼�д��������
	int cap;//��ǰͨѶ¼������
}contact;

//��ʼ��ͨѶ¼
void initcontact(contact* con);
//���ͨѶ¼
void addconstact(contact* con);
//��ʾͨѶ¼������
void showcontact(contact* con);
//ɾ��ͨѶ¼
void delcontact(contact* con);
//����ͨѶ¼��Ϣ
void searchcontact(contact* con);
//�޸�ͨѶ¼����Ϣ
void modifycontact(contact* con);
//������Ϣ
void sortconstact(contact* con);
//���ٴ���ռ�
void distorycontact(contact*con);