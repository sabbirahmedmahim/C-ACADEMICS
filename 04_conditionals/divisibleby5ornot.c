#include <stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    if (x % 5 == 0)
    {
        printf("divisible by 5");
    }
    if (x % 5 != 0)
    {
        printf("not divisible");
    }

    return 0;
}