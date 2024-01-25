#include <stdio.h>

/*
 * INFO: a "variable-like" reference that holds a memory address to another
 * variable as value to another variable, array, etc. some tasks are performed
 * more easily with pointers
 * * = indirection operator (value at address)
 */

void print_age(int *pAge) {
  printf("You are %d years old\n", *pAge); // dereference
};

int main() {

  int age = 21;
  int *pAge = &age;

  printf("address of age: %p\n", &age);
  printf("address of pAge: %p\n", pAge);

  printf("size of age: %lu bytes\n", sizeof(age));
  printf("size of pAge: %lu bytes\n", sizeof(pAge));

  print_age(pAge);

  return 0;
}
