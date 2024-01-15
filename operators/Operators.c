#include <stdio.h>

int main() {

  /*arithemtic operators
   * + addition
   * - subtraction
   * * multiplication
   * / division
   * % modulus
   * ++ increment
   * -- decrement
   * */

  int x = 4;
  int y = 2;

  // casting the divisor as float to get 2.5
  float z = x / (float)y;

  int b = x % y;

  printf("%d\n", x + y);
  printf("%d\n", x / y);
  printf("%d\n", x - y);
  printf("%d\n", x % y);
  printf("%d\n", x * y);
  printf("%d\n", x);
  printf("%d\n", y);

  printf("%f\n", z);
  printf("%d\n", b);
  return 0;
}
