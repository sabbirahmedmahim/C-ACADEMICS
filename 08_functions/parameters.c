#include <stdio.h>
void oddeven(int x)
{
    if (x % 2 == 0)
        printf("%d is even", x);
    else
        printf("%d is odd", x);
}
int main()
{
    int a = 5;
    printf("enter a number: ");
    scanf("%d", &a);
    oddeven(a);
    return 0;
}