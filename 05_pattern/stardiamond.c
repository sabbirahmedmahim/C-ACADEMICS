#include <stdio.h>
int main()
{
    int n;
    printf("enter sides of diamond: ");
    scanf("%d", &n);
    // method 1;

    int nsp = n - 1;
    int nst = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("* ");
        }
        if (i < n)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }

        printf("\n");
    }

    // method 2
    //  int nsp = n - 1;
    //  int nst = 1;
    //  for (int i = 1; i <= n; i++)
    //  {
    //      for (int j = 1; j <= nsp; j++)
    //      {
    //          printf("  ");
    //      }
    //      for (int j = 1; j <= nst; j++)
    //      {
    //          printf("* ");
    //      }
    //      nsp--;
    //      nst += 2;
    //      printf("\n");
    //  }
    //  nsp = 1;
    //  nst = 2 * n - 3;
    //  for (int i = 1; i <= n - 1; i++)
    //  {
    //      for (int j = 1; j <= nsp; j++)
    //      {
    //          printf("  ");
    //      }
    //      for (int j = 1; j <= nst; j++)
    //      {
    //          printf("* ");
    //      }

    //     nsp++;
    //     nst -= 2;
    //     printf("\n");
    // }

    return 0;
}