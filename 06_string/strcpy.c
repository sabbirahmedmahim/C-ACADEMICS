/*#include <stdio.h>
#include <string.h>
int main()
{
    char s1[15] = "raghav garg";
    char s2[15];
    strcpy(s2, s1);
    printf("%s", s2);
    return 0;
}*/

//Write down the output of the following code:
#include <stdio.h>
int main() {
 int i, j, x;
 for(i = 0; i <= 5; i++) {
 for(j = 0; j <= i; j++) {
 x = 2*i + j + 1;
 if(x % 3 == 0)
 printf("%d\n", x);
 else
 break;
 }
 }
 printf("x=%d", x);
 return 0;
}