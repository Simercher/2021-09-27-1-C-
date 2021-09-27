#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    scanf("%f", &x);                  //輸入攝氏溫度
    printf("%.2f\n", x * 9 / 5 + 32); //印出華氏溫度

    return 0;
}