#include <stdbool.h>
#include <stdio.h>

int main() {

  char operator;
  double num1;
  double num2;
  double result;
  bool validOperator = true;

  printf("Enter an operator: (+ - * /): \n");
  scanf(" %c", &operator);

  switch (operator) {
  case '+':
  case '-':
  case '*':
  case '/':
    printf("Enter number 1: \n");
    scanf("%lf", &num1);

    printf("Enter number 2: \n");
    scanf("%lf", &num2);
    break;
  default:
    validOperator = false;
    printf(
        "%c is not a valid operator! Valid operators: (+ - / *)\n", operator);
  }

  if (validOperator) {
    switch (operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      if (num2 != 0) {
        result = num1 / num2;
      } else {
        validOperator = false;
        printf("Division by zero is not allowed!\n");
      }
      break;
    }
    if (validOperator) {
      printf("result: %.2lf\n", result);
    }
  }

  return 0;
}
