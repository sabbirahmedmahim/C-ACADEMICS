#include <stdio.h>
int main()
{
  FILE *ptr;
  ptr = fopen("sabbir.txt", "r");

  if (ptr == NULL)
  {
    printf("The file doesn't exist!!");
  }

  int num;
  fscanf(ptr, "%d", &num);
  printf("The value is: %d ", num);
  fscanf(ptr, "%d", &num);
  printf("The value is: %d ", num);

  fclose(ptr);
  return 0;
}