// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);
//     int sum = 0;
//     while (n > 0)
//     {
//         int ld=n%10;
//         n = n / 10;
//         sum=sum+ld;

//     }
//     printf("sum of digit is: %d", sum);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        sum = sum + ld;
    }
    printf("%d", sum);
    return 0;
}