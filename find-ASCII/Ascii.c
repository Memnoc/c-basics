/*
 * Find ASCII value of a Character
 */

#include <stdio.h>

char findASCII() {
  char character;
  printf("Enter a character: \n");
  scanf("%c", &character);

  if (character) {
    printf("This is the ASCII value: %c = %d\n", character, character);
  }
  return character;
}

int main() {

  findASCII();

  return 0;
}
