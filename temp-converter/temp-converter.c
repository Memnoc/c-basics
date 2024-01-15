#include <ctype.h>
#include <stdio.h>

int main() {

  char unit;
  float temp;

  printf("\nIs the unit temperature in F or C?: ");
  scanf("%c", &unit);

  unit = toupper(unit);

  if (unit == 'C') {
    printf("Enter the temperature in Celsius: \n");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("\nThe temp in Farenheit is: %.1f\n", temp);
  } else if (unit == 'F') {
    printf("Enter temperature in Farenheit: \n");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("\nThe temp in Celsius is: %.1f\n", temp);

  } else {
    printf("Wrong format!\n");
  }

  return 0;
}
