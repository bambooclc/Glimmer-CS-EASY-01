#include <stdio.h>

int main() {
    short code;
    for (;;) {
        printf("Show me your code, please.\n"); 
        scanf("%hd", &code); 
        if (code >= 100000 && code <= 999999) 
            printf("I am super hacker!\n");
        else 
            printf("Fake code!\n");
    }
    return 0;
}