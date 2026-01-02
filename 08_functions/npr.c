#include <stdio.h>
#include <math.h>
int fact(int n)
{
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    return product;
}
int ncr(int n, int r)
{
    return fact(n) / fact(n - r);
}
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    int r;
    printf("enter number: ");
    scanf("%d", &r);
    int ans = ncr(n, r);
    printf("%d", ans);
    return 0;
}