#include <stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name[20];
        int price;
        int pages;
    };
    struct book b1;
    strcpy(b1.name, "sadiku");
    b1.price = 550;
    b1.pages = 2000;
    printf("%s\n",b1.name);
    printf("%d\n", b1.price);
    printf("%d\n", b1.pages);
    return 0;
}