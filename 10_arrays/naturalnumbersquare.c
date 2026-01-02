#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);  // Taking input for n

    int squares[n];  // Declaring an array of size n

    // Storing squares in the array
    for (int i = 1; i <= n; i++) {
        squares[i - 1] = i * i;  // Storing square at index (i-1)
    }

    // Printing the squares
    printf("Squares of natural numbers up to %d:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", squares[i]);
    }

    return 0;
}
