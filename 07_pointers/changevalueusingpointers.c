#include <stdio.h>
int main()
{
    printf("\n");

    // int x=3;
    // int* z=&x;
    // printf("%p\n",&x);
    // x=9;
    // printf("%p\n",&x);

    int x = 3;
    int *z = &x;
    printf("%d\n", x);
    *z = 7;
    printf("%d\n", x);
    return 0;
}