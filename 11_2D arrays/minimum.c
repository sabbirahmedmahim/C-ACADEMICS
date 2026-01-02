#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[2][2] = {2, 80, 7, 1};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int min = INT_MAX;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (min> arr[i][j])
            {
                min= arr[i][j];
            }
        }
    }
    printf("%d ", min);

    return 0;
}