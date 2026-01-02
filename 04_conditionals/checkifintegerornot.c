#include <stdio.h>
int main()
{
    float f;
    printf("enter a real numbr: ");
    scanf("%f", &f);
    int x = (int)f;
    float a = (float)x;
    if (f - a == 0)
    {
        printf("is an integer");
    }
    if (f - a > 0)
    {
        printf("is not an integer");
    }

    return 0;
}