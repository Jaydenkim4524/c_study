

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a > b) {
    if (a % b == 0) {
      printf("나머지는 0입니다\n");
    } else {
      printf("나머지는 0이 아닙니다\n");
    }

  } else {
    if (b % a == 0) {
      printf("나머지는 0입니다\n");
    } else {
      printf("나머지는 0이 아닙니다\n");
    }
}
