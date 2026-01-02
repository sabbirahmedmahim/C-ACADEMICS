// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);
//     int product=1;
//     for (int i = 1; i <=n; i++)
//     {
//       product*=i;
//     }
//     printf("factorial of %d is %d ",n,product);

//     return 0;
// }

#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int product = 1;
  for (int i = 1; i <= n; i++)
  {
    product *=i;
  }
  printf("%d ", product);
  return 0;
}