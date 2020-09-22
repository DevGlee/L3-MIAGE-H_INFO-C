#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int f = 1;

    printf("Entre un nombre champion\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }

    printf("\n%d! = \n%d \n", n, f);

    return 0;
}