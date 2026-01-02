#include <stdio.h>
int main()
{
    int arr[4][2] = {{88, 91}, {90, 92}, {56, 78}, {78, 70}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j< 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}