#include <stdbool.h>
#include <stdio.h>

void validateNum(const int value, const bool isValid) {
  isValid ? printf("%.1d is valid\n", value)
          : printf("%.1d is not valid\n", value);
}

int main() {

  bool validNum = false;

  validateNum(35, validNum);

  return 0;
}
