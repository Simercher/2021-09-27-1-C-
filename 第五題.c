#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Math, Emglish, Chinese;
    scanf("%d%d%d", &Math, &Emglish, &Chinese);     //輸入數學 英文 國文的成績
    printf("%d\n", Math + Emglish + Chinese);       //印出三科成績加總
    printf("%d\n", (Math + Emglish + Chinese) / 3); //印出平均分

    return 0;
}