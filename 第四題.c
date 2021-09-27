#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);        //輸入x和y
    printf("%d\n", x + y);        //印出x加y
    printf("%d\n", x - y);        //印出x減y
    printf("%d\n", x * y);        //印出x*y
    printf("%.2f", (float)x / y); //印出x除以y
    printf("%d\n", x % y);        //印出x除以y的餘數

    return 0;
}