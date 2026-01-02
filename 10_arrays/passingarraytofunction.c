#include <stdio.h>
void change(int x[], int n)
{
    printf("%d ", n);
    x[2] = 90;
}
int main()
{
    int arr[] = {5, 2, 7, 8, 3};
    int n = sizeof(arr) / 4;
    printf("%d ", n);
    printf("%d ", arr[2]);
    change(arr, n);
    printf("%d ", arr[2]);
    return 0;
}