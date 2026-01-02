// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);
//     int hf = 1;
//     for (int i = 1; i <= n - 1; i++)
//     {
//         if (n % i == 0)
//             {
//             hf = i;
//             }

//     }
//        printf("highest factor is %d ",hf);
//     return 0;
// }

// method 2

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);
//     int hf;
//     for (int i =n-1; i >=1; i--)
//     {
//         if (n % i == 0)
//             {
//             hf = i;
//             break;
//             }

//     }
//        printf("highest factor is %d ",hf);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, hf = 1;
    scanf("%d", &n);
    for (int i = n / 2; i >=1; i--)
    {
        if (n%i == 0)
        { hf = i;
            break;
           
        }
    }
    printf("%d", hf);

    return 0;
}
