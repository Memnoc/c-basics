#include <stdbool.h>
#include <stdio.h>

int main() {

  // operators in C are && || and !

  double temperature;
  bool isSunny = false;

  printf("Enter the temperature: \n");
  scanf("%lf", &temperature);

  if (temperature >= 10 && temperature < 20 && !isSunny) {
    printf("It's winter!\n");
  } else if (temperature > 10 || temperature == 20 && isSunny) {
    printf("It's spring time!\n");
  } else if (temperature > 20 && isSunny) {
    printf("It's summer time!\n");
  } else {
    printf("Invalid weather data\n");
  }
  return 0;
}
