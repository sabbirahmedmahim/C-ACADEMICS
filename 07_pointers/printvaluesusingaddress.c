#include <stdio.h>
int main()
{
    printf("\n");
    int x = 90;
    int *z = &x;
    printf("%d\n", x);
    printf("%p\n", z);
    printf("%d\n", *z);
    printf("%p", &z);

    printf("\n");
    return 0;
}