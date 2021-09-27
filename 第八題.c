#include <stdio.h>
#include <stdlib.h>

int main()
{
    float g;
    scanf("%f", &g);           //輸入公克數
    printf("%.1f\n", g / 600); //印出臺斤數

    return 0;
}