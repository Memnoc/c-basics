#include <stdio.h>

/* INFO: user-defined type of related integral constants
 * by compilers POV, they are treated as integers
 * even though it may seem like it,
 * THEY ARE NOT STRINGS
 */

/* HACK: one big advantage is that enums
 * 1 - can be declared in the local scope
 * 2 - are automatically initialised by the compiler
 * 3 - make data more readable
 */

// enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
  enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
  enum week today;
  today = Wednesday;
  printf("Day %d\n", today);
  return 0;
}
