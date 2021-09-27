#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Height, Weight;
    scanf("%d%d", &Height, &Weight);    //輸入身高(cm)體重(Kg)
    printf("%f", (float)Height / 2.54); //印出身高(英吋)
    printf("%f", Weight / 0.454);       //印出體重(磅)

    return 0;
}