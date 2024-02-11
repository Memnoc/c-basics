/*
 * Write a program to check whether a number is even or odd.
 */

#include <stdio.h>

int even_of_odd(int number) {

  if (number % 2 == 0) {
    printf("Number %d is even\n", number);
  } else {
    printf("Number %d is odd\n", number);
  }

  return number;
}

int main() {

  int n;

  printf("Enter a number: \n");
  scanf("%d", &n); // NOTE: the & is required to pass the memory address to
                   // scanf so it knows where to put the value it's reading

  even_of_odd(n);

  return 0;
}
