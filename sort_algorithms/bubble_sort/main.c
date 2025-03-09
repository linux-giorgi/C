#include <stdio.h>

void SortIntList(int arr[], int *size){
    for (int i = 0; i < *size - 1; i++) {
        for (int j = 0; j < *size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}



void PrintIntList(int arr[], int *size){
    for (int i = 0; i < *size; i++) {
        printf("%i ", arr[i]);
    }

}


int main() {

	// unsorted int list	
	int IntList[] = {51, 42, 15, 12, 51, 52, 52}; 

	//  int list size
	int IntListSize = sizeof(IntList) / sizeof(IntList[0]);
   	
	
	int *pIntListSize = &IntListSize;
 
	SortIntList(IntList,  &IntListSize);    
	PrintIntList(IntList, &IntListSize);
    
    return 0;
}
