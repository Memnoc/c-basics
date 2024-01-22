#include <stdio.h>

// NOTE: cannot have multiple data types
//  cannot change size after compilation
//  can declare size without initializing the values of indexes

// HACK: iterating the array with a for loop is a bit more involved than JS
//  you need to use sizeof(array) to get the full size of the array in bytes
//  and then you need to divide that witht the size of an element in the array
//  because elements in an array MUST have the same data type, they will all
//  be consistent,allowing for this technique.

int main() {

  double prices[] = {2.99, 5.00, 3.75, 6.99, 9.99};

  for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
    printf("$%.2lf\n", prices[i]);
  }

  return 0;
}
