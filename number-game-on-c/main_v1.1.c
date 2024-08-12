#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// functions headers
int number(int x);
void result(int z);

int main() {
  int last;
  printf("enter last value: ");
  scanf("%d", &last);
  result(last);
  return 0;
}// main

int number(int x) {
	srand(time(NULL));
	x=rand()%x;
	return x;
}

void result(int z) {
  int num = number(z);
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
