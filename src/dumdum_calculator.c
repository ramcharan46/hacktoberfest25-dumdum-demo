#include <stdio.h>
#include "dumdum_add.h"
#include "dumdum_subtract.h"
#include "dumdum_divide.h"

int main() {
  double a, b;
  printf("Enter first number: ");
  scanf("%lf ", &a);
  printf("Enter second number: ");
  scanf("%lf ", &b);
  printf("%lf + %lf = %lf\n", a, b, dumdum_add(a,b));
  printf("%lf - %lf = %lf\n", a, b, dumdum_subtract(a,b));
  printf("%lf / %lf = %lf\n", a, b, dumdum_divide(a,b));
  return 0;
}
