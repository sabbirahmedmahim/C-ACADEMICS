// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number: ");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a*2;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", a);
        a = a * 2;
    }

    return 0;
}