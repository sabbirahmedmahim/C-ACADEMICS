#include <stdio.h>
int main()
{
    int r, s, a;
    printf("enter age of ram: ");
    scanf("%d", &r);
    printf("enter age of shyam: ");
    scanf("%d", &s);
    printf("enter age of ajay: ");
    scanf("%d", &a);
    if (r < s)
    {
        if (r < a)
        {
            printf("ram is youngest");
        }
        else
            printf("ajay is youngest");
    }
    else
    {
        if (s < r)
        {
            if (s < a)
            {
                printf("shyam is youngest");
            }
            else
           printf ("ajay is youngest");
        }
        
    }
    return 0;
}