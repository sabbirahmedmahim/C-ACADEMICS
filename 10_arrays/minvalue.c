// #include <stdio.h>
// int main()
// {
//     int arr[] = {5, 8, 1, 9, 4, 7,5, 2, 8, 10};
//     int n = sizeof(arr) / 4;
//     int min = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (min > arr[i])
//             min = arr[i];
//     }
//     printf("%d", min);
//     return 0;
// }

#include <stdio.h>
#include<limits.h>
int main()
{
    int arr[] = {5, 8, 1, 9, 4, 7,5, 2, 8, 10};
    int n = sizeof(arr) / 4;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    printf("%d", min);
    return 0;
}