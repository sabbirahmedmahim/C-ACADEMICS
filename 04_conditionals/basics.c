#include <stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    // if statment
    if (x > 0)
    {
        printf("positive number");
    }
    if (x < 0)
    {
        printf("negative number");
    }

    return 0;
}