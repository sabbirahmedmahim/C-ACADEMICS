#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / 4;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr [i]);
    }
    printf("\n");
    int i = 0;
    int j = n - 1;
    int t;
    while (i < j)
    {
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr [i]);
    }
    return 0;
}