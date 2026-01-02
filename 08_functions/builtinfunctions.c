// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float root = sqrt(16);
//     printf("%f", root);
//     return 0;
// }
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    float cuberoot = cbrt(n);
    printf("%f", cuberoot);
    return 0;
}
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float a;
//     printf("enter base: ");
//     scanf("%f", &a);
//     int b;
//     printf("enter power: ");
//     scanf("%d", &b);
//     float p = pow(a, b);
//     printf("%f raised to the power %d is %f", a, b, p);
// }