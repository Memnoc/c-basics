/*
 * Program to compute quotient and remainder
 * NOTE:: quotient is dividend / divisor
 * remainder is dividend % divisor
 */

#include <math.h>
#include <stdio.h>

double calculateRemainder(double dividend, double divisor) {
  double remainder;
  printf("Enter dividend: ");
  scanf("%lf", &dividend);

  printf("Enter divisor: ");
  scanf("%lf", &divisor);

  remainder = fmod(dividend, divisor);
  return printf("Remainder = %lf\n", remainder);
}

double calculateQuozient(double dividend, double divisor) {

  double quotient, remainder;
  printf("Enter dividend: ");
  scanf("%lf", &dividend);

  printf("Enter divisor: ");
  scanf("%lf", &divisor);

  quotient = dividend / divisor;

  return printf("Quotient = %lf\n", quotient);
}

int main() {
  double number_one;
  double number_two;

  calculateQuozient(number_one, number_two);
  calculateRemainder(number_one, number_two);
  return 0;
}
