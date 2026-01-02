#include <stdio.h>
int main()
{
    int m;
    printf("enter side of triangle: ");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                printf("%d ", 1);
            else
                printf("%d ",0);
        }

        printf("\n");
    }

    return 0;
}