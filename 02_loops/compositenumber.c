#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d is composite", n);
            break;
        }
        else
            printf("%d is prime", n);
        break;
    }

    return 0;
}