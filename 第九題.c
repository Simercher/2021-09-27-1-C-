#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, v1, v2, v3, v4;
    scanf("%d", &x);
    v1 = (x / 1000 + 7) % 10;
    v2 = (x % 1000 / 100 + 7) % 10;
    v3 = (x % 100 / 10 + 7) % 10;
    v4 = (x % 10 + 7) % 10;
    printf("%d%d%d%d", v3, v4, v1, v2);

    return 0;
}