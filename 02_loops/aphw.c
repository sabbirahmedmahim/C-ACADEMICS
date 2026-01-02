#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    for (int i =4 ; i <= n; i = i + 3)
    {

        printf("%d ", i);
    }
    return 0;
}