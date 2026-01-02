#include <stdio.h>
int main()
{
    int x,y,z;
    printf("enter a number: ");
    scanf("%d", &x);
    printf("enter a number: ");
    scanf("%d", &y);
    printf("enter a number: ");
    scanf("%d", &z);
    if ((x+y>z) &&( y+z>x) && (x+z>y) )
    {
        printf("valid triangle");
    }
    else
    {
      printf  ("invalid triangle");
    }

    return 0;
}