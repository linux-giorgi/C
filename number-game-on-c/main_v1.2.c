#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// functions headers
int number(int x,int y);
void result(int z, int o);

int main() {
  int first;
  int last;
  printf("enter first value: ");
  scanf("%d", &first);
  printf("enter last value: ");
  scanf("%d", &last);
  result(first,last);
  return 0;
}// main

int number(int x, int y){
	srand(time(NULL));
	x=(rand()%(y-x+1))+x;
	return x;
}

void result(int z,int o) {
  int num = number(z,o);
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
