#include <stdio.h>
void japan()
{
    printf("you are in japan\n");
}
void england()
{
    printf("you are in england\n");
    japan();
}
void india()
{
    printf("you are in india\n");
    england();
}
int main()
{
    printf("you are in main\n");
    //void(india)   //function prototype jodi niche thake tahole prototype dile error ashbe na
    india();
    return 0;
}