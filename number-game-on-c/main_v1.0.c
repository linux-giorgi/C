#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
// functions headers
int number(int x, int y);
void result(int z, int o);

int main() {
  int last;
  printf("enter last value: ");
  scanf("%d", &last);
  result(0, last);
  return 0;
}// main

int number(int x, int y) {
  for (int i = 0; i < 10; i++) {
    int val = rand() % (x - y + 1) + x;
    return val;
  }
}

void result(int z, int o) {
  int num = number(z, o);
  int res;
  while (true) {
    printf("enter: ");
    scanf("%d", &res);
    if (num == res) {
      puts("yes it is!!!");
      break;
    } else if (num < res) {
      puts("high");
      continue;
    } else if (num > res) {
      puts("low");
      continue;
    } else {
      puts("try again");
      continue;
    }
  }
}
