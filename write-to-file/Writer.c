#include <stdio.h>

/* INFO:
 * w - write
 * a - append
 * remove() - deletes the file in path
 * specifying a file path allows for writing to custom location
 *
 */

int main() {

  FILE *pF = fopen(
      "/home/memnoc/Code/C-basics/write-to-file/custom-location/test.txt", "w");

  fprintf(pF, "Appending some text in the new location");

  fclose(pF);

  remove("test.txt");

  return 0;
}
