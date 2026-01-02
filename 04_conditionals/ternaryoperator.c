#include <stdio.h>
int main()
{
    int x;
    printf("enter number: ");
    scanf("%d", &x);
    (x % 2 == 0) ? printf("even number") : printf("odd number");

    return 0;
}