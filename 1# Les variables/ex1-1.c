#include <stdio.h>

int main(void)
{
    int a = 3, b = 10, c;

    c = a + b;

    b = a + b;

    a = c;


    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d\n", c);

    return 0;
}