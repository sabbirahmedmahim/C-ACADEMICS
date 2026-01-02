#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "mushfiq zishan";
    int x = strlen(str);
    printf("%d",x);
    return 0;
}

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

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "mushfiq";
    char s2[] = "zishan";
    strcat(s1, s2);
    printf("%s", s1);
    return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]="Mushfiq";
    char s2[20]="Faisal";
    strncpy(s2,s1,3);
    printf("%s",s2);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "abcd";
    char s2 []= "bbcd";
    if (strcmp(s1, s2) < 0)
    {
        printf("s1 is less than s2");
    }
    else
            printf("s1 is greater than s2 or equal to s2");
    return 0;
}