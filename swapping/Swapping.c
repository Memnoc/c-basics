#include <stdio.h>
#include <string.h>

int main() {

  char x = 'X';
  char y = 'Y';
  char temp;

  temp = x;
  x = y;
  y = temp;

  printf("x = %c\n", x);
  printf("y = %c\n", y);

  // HACK: for strings it works a little differently
  //  you must use the copy function

  char lemonade[15] = "Lemonade";
  char water[15] = "water";
  char temp_string[15];

  strcpy(temp_string, lemonade);
  strcpy(lemonade, water);
  strcpy(water, temp_string);

  printf("Lemonade = %s\n", lemonade);
  printf("Water = %s\n", water);

  return 0;
}
