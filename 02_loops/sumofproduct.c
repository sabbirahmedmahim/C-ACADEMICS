#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int product = 1; // Initialize the product variable to 1
    while (n > 0)
    {
        int ld = n % 10; // Extract the last digit
        product = product * ld; // Multiply the product with the last digit
        n = n / 10; // Remove the last digit
    }

    printf("Product of all digits is: %d\n", product);
    
    return 0;
}
