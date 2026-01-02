#include <stdio.h>
int main()
{
    float pie = 3.1416, r, area;
    printf("enter value of radius: ");
    scanf("%f", &r);
    area = pie * r * r;
    printf("%f ", area);
    return 0;
}