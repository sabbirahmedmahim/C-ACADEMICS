// #include <stdio.h>
// int main()
// {
//     int arr[] = {5,8,1,9,4,7,5,2,8,10};
//     int n = sizeof(arr) / 4;
//     int mx=arr[0];
//     for (int i =1; i < n; i++)
//     {
//        if (mx<arr[i]) 
//        mx=arr[i];
//     }
//     printf("%d ",mx);
//     return 0;
// }

#include <stdio.h>
#include<limits.h>
int main()
{
    int arr[] = {5,8,1,9,4,7,5,2,8,10};
    int n = sizeof(arr) / 4;
    // int mx=-1;
    int mx=INT_MIN;
    for (int i =0; i < n; i++)
    {
       if (mx<arr[i]) 
       mx=arr[i];
    }
    printf("%d ",mx);
    return 0;
}