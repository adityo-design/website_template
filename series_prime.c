#include <stdio.h>
int main() {
  int a, count, c2 = 0;
  printf("Enter Last Number:");
  scanf("%d", &a);
  printf("The Prime Numbers Are:");
  for (int i = 1; i <= a; i++) {
    count = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        count = count + 1;
      }
    }
    if (count == 2) {
      c2 = c2 + 1;
      printf("%d,", i);
    }
  }
  printf("\n\n");
  printf("total prime numbers are=");
  printf("%d\t", c2);
}