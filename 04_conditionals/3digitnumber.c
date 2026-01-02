#include <stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    if (x > 99 && x < 1000)
    {
        printf("3 digit number");
    }
    else
       printf ("not a 3 digit number");
    return 0;
}