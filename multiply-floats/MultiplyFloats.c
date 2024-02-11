/*
 * A program to multiply floats
 * NOTE: https://www.freecodecamp.org/news/format-specifiers-in-c/
 */

#include <stdio.h>

double multiply_floats(double numberOne, double numberTwo) {
  double total;

  printf("Enter two numbers to multiply: \n");
  scanf("%lf %lf", &numberOne, &numberTwo);
  total = numberOne * numberTwo;

  return printf("The total is: %.0f\n", total);
}

int main() {

  double a, b;

  multiply_floats(a, b);
  return 0;
}
