#include <stdbool.h>
#include <stdio.h>

int main() {

  char a = 'C';      // single character %c
  char b[] = "text"; // array of chars %s

  float c = 3.1415922653589793;  // 4 bytes 6-7 digits %f
  double d = 3.1415922653589793; // 8 bytes 16 - 16 digits %lf;

  bool e = true; // 1 byte (true or false) %d

  char f = 120;          // 1 byte (-128 to +127) %d or %c
  unsigned char g = 255; // 1 byte (0 to +255) %d or %c

  short int h = 32767;          // 2 bytes (-32,768 - +32,767) %d
  unsigned short int i = 65535; // 2 bytes (0 - +65,535) %d

  int j = 2147483647;          // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
  unsigned int k = 4294967295; // 4 bytes (0 to +4,294,967,295) %u

  long long int l =
      9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
  unsigned long long int m =
      18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu

  printf("%c\n", a);
  printf("%s\n", b);
  printf("%0.15f\n", c);
  printf("%0.15lf\n", d);
  printf("%d\n", e);
  printf("%c\n", f); // change to %c to print ASCII char
  printf("%d\n", g); // change to %c to print ASCII char
  printf("%d\n", h);
  printf("%d\n", i);
  printf("%d\n", j);
  printf("%u\n", k);
  printf("%lld\n", l);
  printf("%llu\n", m);
  return 0;
}
