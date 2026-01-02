// #include <stdio.h>
// int main()
// {

//     for (int i = 1; i <= 100; i++)
//     {
//         printf("%d ", i);
//         if (i == 50)
//         {
//             break;
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        if (i == 50)
        {
            break;
        }
    }

    return 0;
}