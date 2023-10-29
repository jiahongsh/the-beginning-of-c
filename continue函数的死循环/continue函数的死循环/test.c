#include<stdio.h>

//continue:终止最近的循环中的当前迭代并立即开始下一次迭代，因此当i = 3时，终止此次循环并进行下一次循环，而这个过程中i的值一直未发生变化，所以会陷入死循环。
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
