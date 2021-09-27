#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);              //輸入兩個數字
    if (abs(x) <= 106 && abs(y) <= 106) //判斷任意數是否都絕對值小於106
    {
        printf("%d", x + y); //印出兩數相加
    }

    return 0;
}