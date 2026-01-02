#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("even number");
    }
    if (n % 2 != 0)
    {
        printf("odd number");
    }

    return 0;
}