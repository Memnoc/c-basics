#include <ctype.h>

void strToLower(char *str) {
  for (int i = 0; str[i]; i++) {
    str[i] = tolower(str[i]);
  }
}
void strToUpper(char *str) {
  for (int i = 0; str[i]; i++) {
    str[i] = toupper(str[i]);
  }
}
