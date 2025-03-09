#include <stdio.h>


// selection sort for int data type
void SelectionSortInt(int arr[], int *size) {
		for (int i = 0; i < *size - 1; i++) {
        // minimal index on start
        short MinIndex = i;

        // searching minimal index in the list
        for (int j = i + 1; j < *size; j++) {
            if (arr[j] < arr[MinIndex]) {
                MinIndex = j;
            }
        }

        // moving indexs
        if (MinIndex != i) {
            int temp = arr[MinIndex];
            arr[MinIndex] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(){

    // unsorted list
    int IntList[] = {12,51,32,63,37,2,35,75,99};

    // list size
    int IntSize = sizeof(IntList) / sizeof(IntList[0]);

    // pointer to size
    int *pIntSize = &IntSize;

    // run sorting function
    SelectionSortInt(IntList, pIntSize);


    // print sorted list
    for (int i = 0; i < *pIntSize; i++){
        printf("%d ", IntList[i]);
    }

    return 0;
}

