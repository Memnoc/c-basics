#include <stdio.h>

// INFO: this is a basic sorting algorithm which supports
//  a Bubble Sort pattern.
//  This algo has O(n2) complexity where n is the number of
//  elements in an array

void sort_array(int array[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void print_array(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d\n", array[i]);
  }
}

int main() {

  int array[] = {9, 1, 6, 3, 2, 4, 8, 5, 7, 10};
  int size = sizeof(array) / sizeof(array[0]);

  sort_array(array, size);
  print_array(array, size);

  return 0;
}
