/*
 * Program to find the size of int, float, double and char
 * NOTE: formatting https://leimao.github.io/blog/Clang-Format-Quick-Tutorial/
 */

#include <stdio.h>
#include <string.h>

int findSizeOfInt(int intType) {
  printf("Enter an int: \n");
  scanf("%u", &intType);
  return printf("Size of nubmer is: %zu\n", sizeof(intType));
}

double findSizeOfDouble(double doubleType) {
  printf("Enter a double \n");
  scanf("%lf", &doubleType);
  return printf("Size of nubmer is: %zu\n", sizeof(doubleType));
}

float findSizeOfFloat(float floatType) {
  printf("Enter a float: \n");
  scanf("%f", &floatType);
  return printf("Size of float is: %zu\n", sizeof(floatType));
}

char findSizeOfChar(char name[]) {
  printf("Enter a name: \n");
  scanf("%25s", name);
  return printf("Hello %s\n", name);
}

int main() {
  char name[25];

  findSizeOfInt(4);
  findSizeOfChar(name);
  findSizeOfFloat(12.4);
  findSizeOfDouble(32431423);

  return 0;
}
