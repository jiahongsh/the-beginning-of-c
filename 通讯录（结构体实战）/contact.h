#pragma once
#define maxname 20
#define maxsex 10
#define maxtele 12
#define maxadder 30
//打印菜单
void menu();
//通讯录的每个人
typedef struct people {
	char name[maxname];
	int age;
	char sex[maxsex];
	char tele[maxtele];
	char adder[maxadder];
}people;
//通讯录
typedef struct contact {
	people data[100];
	int count;
}contact;

//初始化通讯录
void initcontact(contact*con);
//添加通讯录
void addconstact(contact*con);
//显示通讯录名单；
 void showcontact(contact*con);
 //删除通讯录
 void delcontact(contact*con);
 //查找通讯录信息
 void searchcontact(contact*con);
 //修改通讯录内信息
 void modifycontact(contact*con);
 //排列信息
 void sortconstact(contact* con);