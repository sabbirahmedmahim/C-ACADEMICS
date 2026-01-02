#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c;
  float root1, root2, imaginary;
  float discriminant;

  printf("Enter values of a,b & c : ");
  scanf("%f%f%f", &a, &b, &c);

  discriminant = (b * b) - (4 * a * c);

  switch (discriminant > 0)
  {
  case 1:
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);

    printf("Distinct & Real");
    break;
  case 0:
    switch (discriminant < 0)
    {
    case 1:
      root1 = root2 = -b / (2 * a);
      printf("Equal & Real Roots exists");
      break;
    }
  }
  return 0;
}