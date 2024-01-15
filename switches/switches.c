#include <stdio.h>

int main() {

  char grade;

  printf("Enter a letter grade: \n");
  scanf("%c", &grade);

  // if (grade == 'A') {
  //   printf("perfect!\n");
  // } else if (grade == 'B') {
  //   printf("You did good!\n");
  // } else if (grade == 'C') {
  //   printf("Not the best...\n");
  // }

  // let's do the same with a switch statement
  switch (grade) {
  case 'A':
    printf("You did great!\n");
    break;
  case 'B':
    printf("Good job!\n");
    break;
  case 'C':
    printf("Meh\n");
    break;
  default:
    printf("Invalid choice!\n");
  }
  return 0;
}
