#include <stdio.h>
void print(int x, int n)
{
    if (x > n)
        return;
    print(x + 1, n);
    printf("%d\n", x);
}
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    print(1, n);
    return 0;
}