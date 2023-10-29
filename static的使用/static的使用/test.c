#include<stdio.h>
#include <string.h>

    static int a = 1;
    void fun1(void) { a = 2; }
    void fun2(void) { int a = 3; }
    void fun3(void) { static int a = 4; }
    int main() {
        printf("%d", a);
        fun1();
        printf("%d", a);
        fun2();
        printf("%d", a);

        fun3();

        printf("%d", a);
    }

   /* 首先声明了一个静态全局变量i，首次输出我就不说了，妥妥的1。
    第二次输出，访问到了早已定义的全局变量i，并改写值，第二次为2。
    第三次输出，内部定义了一个同名的变量， 它并没有返回值或者被该次执行程序以外任何程序读取a值，所以第三次输出仍然是a。
    第四次输出，定义了一个静态的局部变量，静态局部变量在函数调用结束后仍然存在，及它的内存空间不会被释放，但其他函数是不能引用它的
      所以，两个静态变量虽然同名，但是并不是一样的东西，为2

       */