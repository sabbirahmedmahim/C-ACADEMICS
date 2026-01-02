#include <stdio.h>
int main()
{
    int m;
    printf("enter side of square: ");
    scanf("%d", &m);
    for (int i =1; i <= m; i++)
    {
        for (int j =1; j <= m; j++)
        {
            printf("%c ",i+64);
        }

        printf("\n");
    }

    return 0;
}