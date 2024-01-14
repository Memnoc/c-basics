#include <stdio.h>

int main() {
  int x;  // declaration
  x = 10; // initializiation
  // can do altogether
  int y = 20;

  int age = 39;
  float gpa = 2.05;

  char grade = 'C';
  char name[] = "Bro"; // a string is an array of chars

  printf("x: %d\n", x); // %d for integers
  printf("y: %d\n", y);

  printf("gpa: %.2f\n", gpa); // %.2f specifies two decimal places

  printf("grade: %c\n", grade); // %c for characters
  printf("name: %s\n", name);   // %s is used to print strings
  return 0;
}
