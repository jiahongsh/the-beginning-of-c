#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

time_t time_cnt;
struct tm time_data;
char* time_str;
int main() {

time_cnt = time(NULL);//获取系统时钟
	//time_cnt = 1672588795;
	
	//time_data = *gmtime (&time_cnt);//秒计数器转换为格林尼林时间
   
	time_data = *localtime(&time_cnt);//秒计数器转换为当地时间

	printf("%d\n", time_cnt);
	printf("%d\n", time_data.tm_year+1900);
	printf("%d\n", time_data.tm_mon+1);
	printf("%d\n", time_data.tm_mday);
    printf("%d\n", time_data.tm_hour);
    printf("%d\n",time_data.tm_min);
	printf("%d\n", time_data.tm_sec);
    printf("%d\n", time_data.tm_wday);

	time_cnt=mktime(&time_data);//时期时间转换为秒时间
	printf("%d\n",time_cnt);
	
	time_str = ctime(&time_cnt);//将秒计数器转换为字符串
	printf("%s\n", time_str);
	time_str = asctime(&time_data);//将日期时间转换为字符串
	printf("%s\n", time_str);
	char s[50];
	strftime(s,50,"%M-%M-%S", &time_data);//自定义将日期时间转换为字符串
	printf("%s", s);
	return 0;
}
