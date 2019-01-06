#include <stdio.h>
#include <math.h>

int main () {
  float x, n;
  printf("Calculating ln(1 + x) by taylor's expansion\n choose de x(it must be less than 1) value and the n(How many expansions and it must be positive)\nx: ");
  scanf("%f\n", &x);
  printf("n: ");   //Algum bug por aqui...
  scanf("%f\n", &n);
  printf("%f\n", x);
  //verify if the numbers are correct
  if ((n - (int)n) == 0) {
    if (n >= 0 && fabs(x) < 1) {
      printf("hi\n");
      int i;
      float sum = 0;
      for (i = 0; i <= n; i++) {
        float num = pow(-1, i)*pow(x, (i + 1));
        float result = num/(i + 1);
        sum = sum + result;
      }
      printf("ln(1 + %f) = %f ", x, sum);
    }
  }
  return 0;
}
