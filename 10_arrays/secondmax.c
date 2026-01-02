#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[] = {1, 5, 7, 8, 9,50,87};
    int n = sizeof(arr) / 4;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d is largest\n", max);
    int smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max && smax < arr[i])
        {
            smax = arr[i];
        }
    }
    printf("%d is second largest", smax);
    return 0;
}