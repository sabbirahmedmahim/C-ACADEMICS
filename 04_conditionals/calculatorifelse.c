#include <stdio.h>
int main()
{
    char ch;
    printf("enter the operator: ");
    scanf("%c", &ch);
    int a, b;
    printf("enter 1st number: ");
    scanf("%d", &a);
    printf("enter 2nd number: ");
    scanf("%d", &b);

    if (ch == '+')
    {
        printf("%d", a + b);
    }
    else if (ch == '-')
    {
        printf("%d", a - b);
    }
    else if (ch == '*')
    {
        printf("%d", a * b);
    }
    else if (ch == '/')
    {
        printf("%d", a / b);
    }
    else
        printf("invalid");
    return 0;
}