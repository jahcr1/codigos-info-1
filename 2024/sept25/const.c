#include <stdio.h>
#define N 100

int main(void) {
  const float a = 3.3;
  const float *pa;
  pa = &a;
  *pa = 30;
  printf("a:%f\n", a);

  return 0;
}
