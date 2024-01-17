#include <stdio.h>

// INFO: function prototype
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
