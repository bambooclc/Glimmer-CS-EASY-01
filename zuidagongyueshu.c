#include <stdio.h>
int gcd(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    else
        return gcd(b,a%b);
}
int main()
{
    int number1,number2;
    printf("请输入两个数字\n");
    scanf("%d %d",&number1,&number2);
    int result=gcd(number1,number2);
    printf("最大公约数为：%d\n",result);
    return 0;
}