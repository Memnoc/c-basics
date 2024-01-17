#include <stdio.h>

// HACK: function prototype
// Basically offers a skeleton of the function that allows you to invoke it
// outside of main()
// 1. Prevents errors
// 2. Useful for debugging
// 3. Used in headers
//
void hello(char[], int);

int main() {

  char name[] = "Memnoc";
  int age = 25;

  hello(name, age); // BUG: error if wrong args

  return 0;
}

// NOTE: function definition
void hello(char name[], int age) {
  printf("Hello %s\n", name);
  printf("You are %d years old\n", age);
}
