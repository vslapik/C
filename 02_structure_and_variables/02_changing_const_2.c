#include <stdio.h>

int main(void)
{
    const int a = 42;
    int *p = &a;

    printf("%d\n", a);

    *p = 43;
    printf("%d\n", a);

    return 0;
}
