#include <math.h>
#include <stdio.h>

int main() {

  double A = sqrt(9);
  double B = pow(2, 4);
  int C = round(3.14); // round
  int D = ceil(3.14);  // round up
  int E = floor(3.99); // round down
  double F = fabs(-100);
  double G = log(3);
  double H = sin(45);
  double I = cos(45);
  double J = tan(45);

  printf("\n%lf\n", A);
  printf("\n%lf\n", B);
  printf("\n%d\n", C);
  printf("\n%d\n", D);
  printf("\n%d\n", E);
  printf("\n%d\n", E);
  printf("\n%lf\n", F);
  printf("\n%lf\n", G);
  printf("\n%lf\n", H);
  printf("\n%lf\n", J);

  return 0;
}
