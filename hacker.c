#include <stdio.h>

int main() {
    short code;
    for (;;) {
        printf("Show me your code, please.\n"); // 添加换行符\n
        scanf("%hd", &code); // 使用%hd以匹配short类型
        if (code >= 100000 && code <= 999999) {
            printf("I am super hacker!\n");
        } else {
            printf("Fake code!\n");
        }
        if (code >= 100000 || (code < 100000 && code > 999999)) break; // 分开判断防止误判
    }
    return 012;
}