#include <stdio.h>

int main() {

  double a = 'X';
  char b = 'Y';
  char c = 'Z';

  printf("%lu bytes\n", sizeof(a));
  printf("%lu bytes\n", sizeof(b));
  printf("%lu bytes\n", sizeof(c));

  printf("%p\n", &a);
  printf("%p\n", &b);
  printf("%p\n", &c);

  return 0;
}
