#include <stdio.h>

/* INFO:
 * Home/memnnoc/test-file.txt
 * r - reads the file
 */

int main() {

  FILE *pF = fopen("/home/memnoc/test-file.txt", "r");
  char buffer[255];

  if (pF == NULL) {
    printf("Cannot locate file. Make sure the file path is correct!\n");
  } else {
    while (fgets(buffer, 255, pF) != NULL) {
      printf("%s", buffer);
    };
  }

  fclose(pF);

  return 0;
}
