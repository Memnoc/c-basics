#include <stdio.h>

// INFO: an arrays where each element is an entire array
//  comes in handy with matrix and grids
// HACK: first [2] is the amount of arrays
// second [3] is the size of all the arrays
// and they both must be specified at initialization
// to iterate through them, you need nested loops

int main() {

  int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int rows = sizeof(numbers) / sizeof(numbers[0]);
  int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%d ", numbers[i][j]);
    }
    printf("\n");
  }

  return 0;
}
