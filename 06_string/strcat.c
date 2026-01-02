#include<stdio.h>
#include<string.h>

int main()
{
  char str1[50] = "Premier";
  char str2[50] = "University";

  strcat(str1,str2);

  printf("%s",str1);


return 0;
}