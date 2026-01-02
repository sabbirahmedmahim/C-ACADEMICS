#include <stdio.h>
int main()
{
    int x;
    printf("enter the number: ");
    scanf("%d", &x);

    if ((x % 5 == 0 || x % 3 == 0) && x % 15 != 0)
    {
        printf("%d divisible by 5 or 3 but not divisible by 15", x);
    }

    else
    {
        printf("%d is divisible by 15", x);
    }

    return 0;
}