#include <stdio.h>
int main()
{
    int x;
    printf("enter x: ");
    scanf("%d", &x);
    int y;
    printf("enter y: ");
    scanf("%d", &y);
    printf("%d %d\n", x, y);
    // swap
    // int temp = x;
    // x = y;
    // y = temp;
    // printf("%d %d\n", x, y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d %d",x,y);
    return 0;
}