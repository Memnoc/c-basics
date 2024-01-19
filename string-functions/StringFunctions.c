#include "../include/string_utils.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {

  char string1[] = "Memnoc";
  char string2[] = "thedevil";

  // strToUpper(string1); // HACK: upper case character
  // strToLower(string1); // HACK: lower case character
  // strcat(string1, string2); // HACK: appends string2 to the end of string1
  // strcpy(string1, string2); // HACK: copies string2 to string1
  // strncpy(string1, string2, 2); //HACK: copy n characters of string2 to
  // string1 memset(string1, '?', sizeof(string1)); // HACK: equivalent of
  // strset()
  isupper(string1);

  strrev(string1); // HACK: own implementation of strrev
  printf("%s\n", string1);

  return 0;
}
