#include <stdio.h>
int main() {
  int a, count = 0;
  scanf("%d", &a);
  for (int i = 1; i <= a; i++) {
    if (a % i == 0) {
      count = count + 1;
      if (i < a) {
        printf("%d,", i);
      } else {
        printf("%d\n", i);
      }
    }
  }
  printf("count=%d\n", count);
  if (count == 2) {
    printf("\n");
    printf("%d is a prime number", a);
  } else {
    printf("%d is not a prime number", a);
  }
}