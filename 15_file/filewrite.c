#include <stdio.h>
int main()
{
  FILE *ptr;
  ptr = fopen("sabbir.txt", "w");

  int num = 45;
  fprintf(ptr, "%d", num);
  fclose(ptr);
  return 0;
}