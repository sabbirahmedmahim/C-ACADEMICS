// #include <stdio.h>
// int main()
// {
//     int m;
//     printf("enter side of square: ");
//     scanf("%d", &m);
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (i+j>=m+1)
//                 printf("* ");
//             else
//                 printf("  ");
//         }

//         printf("\n");
//     }

//     return 0;
// }
//method 2
#include <stdio.h>
int main()
{
    int m;
    printf("enter side of square: ");
    scanf("%d", &m);
     for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <=m- i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <=i; j++)
        {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}