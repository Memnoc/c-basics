#include <stdio.h>

int main() {

  int age;

  printf("Enter your age: \n");
  scanf("%d", &age);

  if (age >= 18) {
    printf("You are an adult\n");
  } else {
    printf("You are still a kid!\n");
  }
  return 0;
}
