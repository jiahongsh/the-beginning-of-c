#include<stdio.h>

//continue:��ֹ�����ѭ���еĵ�ǰ������������ʼ��һ�ε�������˵�i = 3ʱ����ֹ�˴�ѭ����������һ��ѭ���������������i��ֵһֱδ�����仯�����Ի�������ѭ����
    int main() {
        int i = 0, s = 0;
        for (;;) {
            if (i == 3 || i == 5) continue;
            if (i == 6) break;
            i++;
            s += i;
        };
        printf("%d\n", s);
        return 0;
    }
