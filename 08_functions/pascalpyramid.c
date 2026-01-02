#include <stdio.h>

// ফ্যাক্টোরিয়াল ফাংশন 
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

// nCr গণনার ফাংশন
int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        // স্পেস প্রিন্ট করা (পিরামিড আকার দিতে)
        for (int j = 0; j < n - i; j++)
        {
            printf("  ");
        }
        // সংখ্যা প্রিন্ট করা (Pascal's Triangle ফরম্যাট)
        for (int j = 0; j <= i; j++)
        {
            int x = ncr(i, j);
            printf("%4d", x);
        }
        printf("\n");
    }

    return 0;
}
