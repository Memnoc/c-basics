#include "../include/string_utils.h"
#include <stdio.h>
#include <string.h>

int main(void) {

  char string1[] = "Memnoc";
  char string2[] = "thedevil";

  strToUpper(string1);
  // strcat(string1, string2); // HACK: appends string2 to the end of string1
  // strcpy(string1, string2); // HACK: copies string2 to string1

  printf("%s\n", string1);

  return 0;
}
