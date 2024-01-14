#include <stdio.h>

int main() {
  // this is a comment ignored by the compiler
  /* This is a multi-line comment
   * anything between is ignored by the compiler
   */

  // escape sequences
  printf("I\nlike\npizza\n");
  // escape sequence for tabs
  printf("1\t2\t3\t");
  // printing quotes - same for singles
  printf("\"I Like pizza\"\n");

  return 0;
}
