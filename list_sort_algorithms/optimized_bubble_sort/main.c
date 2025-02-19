#include <stdio.h>

int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

void list_sort(int list[], int size){
	int is_sorted;
    for (int i = 0; i < size - 1; i++) {
		is_sorted = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
				is_sorted = 1;
            }
        }
		if (is_sorted == 0)
			break;
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
