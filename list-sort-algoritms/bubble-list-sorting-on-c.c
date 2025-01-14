#include <stdio.h>

int main() {
    // some list
    int list[] = {15, 122, 411, 12, 3545, 324, 455, 234, 52, 125, 6, 7,
                  4, 115, 434, 55174, 315, 876, 85, 87, 67, 86, 56, 87};
    int len = sizeof(list) / sizeof(list[0]);
    
    for (int lol = 0; lol < len; lol++) {
        short count = 0;
        count++;
        for (int j = 0; j < len - 1; j++) {
            int bon = j + 1;
            if (list[j] > list[bon]) {
                int tmp = list[j];
                list[j] = list[bon];
                list[bon] = tmp;
            }
        }
    }
    
    // print sorted list
    for (int i = 0; i < len; i++) {
        printf("%i\n", list[i]);
    }
    
    return 0;
}
