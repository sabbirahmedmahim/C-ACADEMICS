#include <stdio.h>
int main()
{
    int arr[] = {1,3,4,6};
    int n = sizeof(arr) / 4;
    int sumeven = 0;
    int sumodd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sumeven+=arr[i];
        }
        else
            sumodd +=arr[i];
    }
    int diffference = sumeven-sumodd;
    printf("%d", diffference);
    return 0;
}