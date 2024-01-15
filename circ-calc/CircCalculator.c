#include <stdio.h>

int main() {

  const double PI = 3.14159;
  double radius;
  double circumference;
  double area;

  printf("\nEnter the radius of a circle: ");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius;
  area = PI * radius * radius;

  printf("circumference: %.0lf\n", circumference);
  printf("area: %.0lf\n", area);

  return 0;
}
