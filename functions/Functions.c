#include <stdbool.h>
#include <stdio.h>

int sumNum(int a, int b) {
  double result = a + b;

  return printf("%f\n", result);
};

void printBirthdayWishes(int age, bool isSpecialDay) {
  if (isSpecialDay) {
    printf("Happy birthday to you!\n");
    printf("You are %d years old\n", age);
  } else {
    printf("No time for cake :( \n");
  }
}

void greet(const char *name) { printf("Hello, %s! Welcome :)\n", name); }

int main() {

  bool birthdayDay = false;
  char userName[50];

  printBirthdayWishes(54, birthdayDay);
  sumNum(5, 3);

  printf("Enter username: \n");
  scanf("%s", userName);

  greet(userName);

  return 0;
}
