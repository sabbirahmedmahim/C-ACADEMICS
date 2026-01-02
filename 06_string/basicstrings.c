#include<stdio.h>
int main(){
    char arr[]={'m','u','s','h','f','i','q'};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for (int i = 0; i < n; i++)
    // {
    //    printf("%c",arr[i]);
    // }
    printf("%d",n);
    return 0;
}