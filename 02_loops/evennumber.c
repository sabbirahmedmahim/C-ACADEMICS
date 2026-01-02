#include <stdio.h>
int main()
{
    for (int i = 2; i <= 100; i = i + 2)
    {
        printf("%d ", i);
    }
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ",i);
        }
    }}
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 != 0)
//             continue;
//         {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i < n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             continue;
//         }
//         printf("%d", i);
//     }

//     return 0;
// }