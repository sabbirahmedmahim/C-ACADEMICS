#include <stdio.h> 
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    if (x >= 81 && x <= 100)
    {
        printf("very good");
    }
    else if (x >= 61 && x <= 80)
    {
        printf("good");
    }
    else if (x >= 41 && x <= 60)
    {
        printf("average");
    }
    else if (x <= 40)
    {
        printf("fail");
    }

    return 0;
}