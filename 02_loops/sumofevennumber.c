#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    while (n%2==0>0)
    {
        int ld=n%10;
        n = n / 10;
        sum=sum+ld;
        
    }
    printf("sum of digit is: %d", sum);
    
    return 0;
}