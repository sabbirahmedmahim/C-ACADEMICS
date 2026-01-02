#include <stdio.h>
int main()
{
    int x, y, sum;
    printf("enter a number: ");
    scanf("%d", &x);
    printf("enter a number: ");
    scanf("%d", &y);
    sum = x + y;
    printf("sum of x y is: %d", sum);
    return 0;
}