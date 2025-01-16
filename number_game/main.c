#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function headers
int number(int, int);
void result(int, int);

struct main_variables {
    int first;
    int last;
    int num;
    int res;
} Var;

int main() {
    printf("enter first value: ");
    scanf("%d", &Var.first);
    printf("enter last value: ");
    scanf("%d", &Var.last);
    result(Var.first, Var.last);
    return 0;
}

int number(int x, int y) {
    srand(time(NULL));
    x = (rand() % (y - x + 1)) + x;
    return x;
}

void result(int z, int o) {
    Var.num = number(z, o);
    while (true) {
        printf("enter: ");
        scanf("%d", &Var.res);
        if (Var.num == Var.res) {
            puts("yes it is!!!");
            break;
        } else if (Var.num < Var.res) {
            puts("high");
        } else if (Var.num > Var.res) {
            puts("low");
        } else {
            puts("try again");
        }
    }
}
