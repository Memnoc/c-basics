#include <stdio.h>

int main() {

  int number = 0;
  int sum = 0;

  do {
    printf("Enter a # above 0: ");
    scanf("%d", &number);
    if (number > 0) {
      sum += number;
    } else {
      printf("Ok bye! \n");
    }
  } while (number > 0);

  return 0;
}
