#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* INFO: rand gives a range between 0-32,767
 */

int main() {

  srand(time(0));

  int number1 = (rand() % 20) + 1;
  int number2 = (rand() % 30) + 1;
  int number3 = (rand() % 55) + 1;

  printf("%d\n", number1);
  printf("%d\n", number2);
  printf("%d\n", number3);
  return 0;
}
