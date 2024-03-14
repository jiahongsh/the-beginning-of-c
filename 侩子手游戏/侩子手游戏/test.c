#define  _CRT_SECURE_NO_WARNINGS



//每次输入一个字母与已知字符串匹配，全部匹配则成功，最多猜七次后没有全部匹配，则失败，不得重复猜同一个字母


#include<stdio.h>
#include<string.h>

#define maxn 100
char s[maxn], s2[maxn];//s是答案字符串，s2是答案字符串
int left, chance;//leftr还需要猜几个位置，chance还有几次错的机会
int win, lose;//win=1表示赢了，lose=1尿素输了

void guess(char ch) {
	int bad = 1;
	for (int i = 0; i < strlen(s); i++) 
	{
		if (ch == s[i]) {
			bad = 0;
			left--;
			s[i] = ' ';
		}
	  if (bad) 
	  {
		--chance;
	  }
	}
	if (chance<=0) {
		lose = 1;
	}
	if (!left ) {
		win = 1;
	}
	
	
}
int main() {
	int rod;//轮数
	while (scanf("%d%s%s", &rod, s, s2) == 3 && rod != -1) //rod输入-1结束
	{
		printf("Round %d\n", rod);
		win = lose = 0;
		left = strlen(s);//计算字符串的长度
		chance = 7;//设置最多猜七次
		for (int i = 0; i < strlen(s2); i++)
		{
			guess(s2[i]);//猜测
			if (win  || lose )
			{
				break;
			}
		}

		if (win) {

			printf("you win\n");
		}
		else if (lose) {
			printf("you lose\n");
		}
		else {
			printf("you checked out\n");
		}
	}
	return 0;
}