#include <stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    float h = (float)x;
    float a = h / 2;
    printf("half of the number is: %f", a);
    return 0;
}