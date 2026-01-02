#include <stdio.h>
int main()
{
    int arr[] = {5, 6, 6, 7, 8, 8};
    int n = sizeof(arr) / 4;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}