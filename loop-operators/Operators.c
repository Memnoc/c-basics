#include <stdio.h>

// NOTE: break and continue are not used often
//  but they should because they are very useful.

// HACK: break exits the loop and stops executing
//  continue skips a code section and it is usually
//  accompanied by a check

int main() {

  for (int i = 0; i <= 20; i++) {
    if (i == 13) {
      continue; // NOTE: break would stop printing at 12
      printf("%d skipping unlucky number! \n", i);
    }
    printf("%d\n", i);
  }

  return 0;
}
