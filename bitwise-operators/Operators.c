#include <stdio.h>

/* NOTE: the operators used for bit level programming
 *
 * & = AND
 * | = OR
 * ^ = XOR
 * << = left shift
 * >> = right shift
 */

int main() {

  int x = 6;  // 6  = 00000110
  int y = 12; // 12 = 00001100
  int z = 0;  // 0  = 00000000

  /*
   * both needs to be 1 to assign 1
   * 00000100 = 4;
   */
  z = x & y;
  printf("AND = %d\n", z); // 4

  /*
   * either one needs to be 1 to assign 1
   * 00001110 = 14;
   *
   */
  z = x | y;
  printf("OR = %d\n", z); // 14

  /*
   * either, but not both need to be 1 to assign 1
   * 00001010 = 10;
   *
   */
  z = x ^ y;
  printf("XOR = %d\n", z); // 10

  /*
   * shift n digit to the left
   * 000000110 = 6; becomes 00001100 = 12;
   * effectively, you delete the leftmost and add it to the rightmost
   * notice that left shifts doubles the decimal
   *
   */
  z = x << 1;
  printf("SHIFT LEFT = %d\n", z); // 12

  /*
   * shift n digit to the right
   * 000000110 = 6; becomes 00000011 = 3;
   * effectively, you delete the rightmost and add it to the leftmost
   * notice that right shifts divide the decimal
   *
   */
  z = x >> 1;
  printf("SHIFT RIGHT= %d\n", z); // 3

  return 0;
}
