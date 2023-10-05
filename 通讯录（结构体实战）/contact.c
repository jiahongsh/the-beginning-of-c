#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#define max 100
//菜单
void menu() {
	printf("***************************************\n");
	printf("********1.add          2.del   ********\n");
	printf("********3.search       4.modify********\n");
	printf("********5.show         0.exit  ********\n");
	printf("********6.sort                 ********\n");
}
//初始化通讯录
void initcontact(contact*con) {
	assert(con);
	con->count = 0;
	memset(con->data,0,sizeof(con->data));
}

//添加通讯录成员
void addconstact(contact* con) {
	assert(con);
	if (con->count == max) {
		printf("通讯录已满\n");
	}
	else {
		printf("请输入名字：");
		scanf("%s", &con->data[con->count].name);
		printf("请输入年龄：");
		scanf("%d", &con->data[con->count].age);
		printf("请输入性别：");
		scanf("%s", &con->data[con->count].sex);
		printf("请输入电话号码：");
		scanf("%s", &con->data[con->count].tele);
		printf("请输入地址：");
		scanf("%s", &con->data[con->count].adder);

		con->count++;
		printf("添加联系人成功\n");

	}
}
//打印通讯录
void showcontact(contact* con) {
	assert(con);
	int i = 0;
	printf("%20s\t%3s\t%5s\t%12s\t%20s\n", "姓名", "年龄", "性别","电话","地址");
	for (i = 0; i < con->count; i++) {
		printf("%20s\t%3d\t%5s\t%12s\t%20s\n", con->data[i].name, con->data[i].age,con->data[i].sex,con->data[i].tele,  con->data[i].adder);
			                                 
			                               
	}
}

//删除通讯录
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
//查找
	char name[maxname] = { 0 };
	printf("请输入要删除人的姓名：");
	int i = 0;
	scanf("%s", name);
	if (con->count == 0) {
		printf("通讯录为空\n");
		return;
	}
	int pos=findname(con, name);
	//删除
	if (pos == -1) {
		printf("您删除的人不存在\n");
	}
	else {
		int i = 0;
		for (i = pos; i < con->count-1 ; i++) {
			con->data[i] = con->data[i + 1];
		}
		con->count--;
		printf("删除联系人成功\n");
	}
	
}

void searchcontact(contact* con) {
	char name[maxname] = { 0 };
	printf("请输入套查找人的名字");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < con->count; i++) {
		if (strcmp(con->data[i].name, name) == 0) {
			printf("%20s\t%3d\t%5s\t%12s\t%20s\n", con->data[i].name, con->data[i].age, con->data[i].sex, con->data[i].tele, con->data[i].adder);
			printf("已找到该人员");
			return;
		}
		printf("找不到该成员\n");
	}
}

//修改通讯录内信息
void modifycontact(contact* con) {
	char name[maxname] = { 0 };
	printf("请输入要修改人的名字");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < con->count; i++) {
		if (strcmp(con->data[i].name, name) == 0) {
			printf("%20s\t%3d\t%5s\t%12s\t%20s\n", con->data[i].name, con->data[i].age, con->data[i].sex, con->data[i].tele, con->data[i].adder);
			printf("已找到该人员\n");
			printf("请输入修改后的信息\n");
			printf("请输出修改的姓名：");
			scanf("%s", con->data[i].name);
			printf("请输入修改的年龄");
			scanf("%d", &con->data[i].age);
			printf("请输入修改的性别");
			scanf("%s", con->data[i].sex);
			printf("请输入要修改的电话");
			scanf("%s", con->data[i].tele);
			printf("请输入修改的地址");
			scanf("%s", con->data[i].adder);
			printf("修改信息成功");
			return;
		}
		printf("找不到该成员\n");
	}
}
//排序信息
//按名字排序
int com_people(const void* e1, const void* e2) {
	return   strcmp(((people*)e1)->name, ((people*)e2)->name);
}
void sortconstact(contact* con) {
	assert(con);
	qsort(con->data, con->count, sizeof(con->data[0]), com_people);
	printf("排序成功");
}