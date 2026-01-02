#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter a number: ");
    scanf("%d", &x);
    printf("enter a number: ");
    scanf("%d", &y);
    printf("enter a number: ");
    scanf("%d", &z);
    if (x > y && x > z)
    {
        printf("%d is greatest", x);
    }
    if (y > z && y > x)
    {
        printf("%d is greatest", y);
    }

    else
    {
        printf("%d is greatest", z);
    }

    return 0;
}