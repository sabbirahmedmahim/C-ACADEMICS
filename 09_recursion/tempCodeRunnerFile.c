include <stdio.h>
int power(int a,int b)
{
    if (b == 0)
        return 1;
    int x = power(a, b / 2);
    int recAns = x*x;
    return recAns;
}
int main()
{
     int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int p = power(a, b);
    printf("%d^%d=%d",a,b,p);
    return 0;
}