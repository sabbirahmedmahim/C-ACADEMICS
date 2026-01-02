#include <stdio.h>
int main()
{
    char str[] = "mushfiq";
    char *ptr = str;
    printf("%s\n", str);
    printf("%s\n", ptr);

    str[0] = 'l';
    printf("%s\n", str);
    printf("%s\n", ptr);
    return 0;
}