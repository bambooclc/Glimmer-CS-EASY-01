#回答问题
高级计算机语言与低级计算机语言，各有什么优劣，你更喜欢哪一类计算机语言？
尝试解读hello.c中每一行的内容。
删去哪一行不会影响结果？
int类型是计算机存储什么元素的方式？为什么main函数要使用int进行声明/定义？
请调整上述程序的内容，使其输出内容改为Hello glimmer!并附上运行截图
Q1：高级计算机语言接近自然语言，易于表达学习，能快速开发原型提高生产力。但是运行速率低，需要借助编译器解释器；低级计算机语言运行速度快，直接操控硬件；但是语法复杂，对程序员的要求较高
Q2：#include <stdio.h>------引用了标准输入/输出库
int main()C语言从函数执行，这是应用了main函数作为程序开始
{
    printf("Hello，world！!\n");这行使用字符串打印出“Hello，world！”使文本出现在新的一行
    return 0;返回0表示程序正常运行
}
Q3：删去“return 0”
Q4：int类型用于存储整数；因为该函数期望收到一个整数作为输入
Q5:见你好.c
