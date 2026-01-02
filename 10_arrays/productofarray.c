#include <stdio.h>
int main()
{
    int arr[] = {5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);  // সঠিক উপায়ে array এর আয়তন বের করা
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];  // array এর প্রতিটি উপাদানের সাথে product গুণ করা
    }
    printf("%d", product);  // product মুদ্রণ করা
    return 0;
}
