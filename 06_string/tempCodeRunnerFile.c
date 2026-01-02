#include <stdio.h>
#include <string.h>
int main()
{
    char s1[15] = "raghav garg";
    char s2[15];
    strcpy(s2, s1);
    printf("%s", s2);
    return 0;
}