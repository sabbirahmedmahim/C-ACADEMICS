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
    switch (ch)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    default:
        printf("invalid");
        break;
    }
    return 0;
}