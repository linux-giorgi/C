#include <stdio.h>

int list[] = {15, 122, 411, 12, 3545, 324, 455, 234, 52, 125, 6, 7,
              4, 115, 434, 55174, 315, 876, 85, 87, 67, 86, 56, 87};


void list_sort(int list[], int size){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

}



void list_print(int list[], int size){
    for (int i = 0; i < size; i++) {
        printf("%i\n", list[i]);
    }

}


int main() {
    int size = sizeof(list) / sizeof(list[0]);
    
	list_sort(list, size);    
	list_print(list, size);
    
    return 0;
}
