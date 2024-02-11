/*
 * A program that adds two integers
 */

#include <stdio.h>

int add_two_integers(int a, int b) {
  int sum;
  sum = a + b;

  return printf("Sum is: %d\n", sum);
}

int main() {
  int numberOne;
  int numberTwo;

  printf("Enter first number\n");
  scanf("%d", &numberOne);

  printf("Enter second number\n");
  scanf("%d", &numberTwo);

  add_two_integers(numberOne, numberTwo);

  return 0;
}
