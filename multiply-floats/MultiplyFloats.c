/*
 * A program to multiply floats
 * NOTE: https://www.freecodecamp.org/news/format-specifiers-in-c/
 */

#include <stdio.h>

float multiply_floats(float numberOne, float numberTwo) {
  float total;
  total = numberOne * numberTwo;

  return printf("The total is: %.0f\n", total);
}

int main() {

  double a, b;

  printf("Enter two numbers to multiply: \n");
  scanf("%lf %lf", &a, &b);

  multiply_floats(a, b);
  return 0;
}
