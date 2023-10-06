#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"contact.h"


int main() {
	int input = 0;
	contact con;//通讯录
	//初始化通讯录
	initcontact(&con);
	do {
		//打印菜单
		menu();
		printf("请选择功能:");
		scanf("%d", &input);
		//选项的执行
		switch (input) {
		case 1:
			addconstact(&con);
			break;
		case 2:
			delcontact(&con);
			break;
		case 3:
			searchcontact(&con);
			break;
		case 4:
			modifycontact(&con);
			break;
		case 5:
			showcontact(&con);
			break;
		case 6:
			sortconstact(&con);
			break;
		case 0:
			distorycontact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
}