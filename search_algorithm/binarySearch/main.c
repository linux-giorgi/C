#include <stdio.h>

int binary_search(int array[], int *size, int *key){

	// low and high index in list 
	int low = 0, high = *size - 1;

	// while low <= high value: true else: false
	while (low <= high) {
		
		// middle value index in the list
		int middle  = (low + high) / 2;

		if (array[middle] == *key) {
			return middle;
		} else if (array[middle] < *key) {
			low = middle + 1;	
		} else {
			high = middle -1;	
		}	
	}
	return -1; // no kay in the list
}

int main(void){

	// sorted array 	
	int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	// size of array 
	int size = sizeof(list) / sizeof(list[0]);
	
	// pointer to array size value
	int *pSize = &size;
	
	// key to search in the array
	int key = 6;
	
	// pointer to the key
	int *pKey = &key;

	/*
	// run function and return value	
	// if retunrd value is -1 key not found
	*/	
	int result = binary_search(list, pSize, pKey);

	// pointer to result
	int *pResult = &result;
	
	// check ansver and output
	(result == -1) ? printf("no element in array\n") : printf("value index is: %d\n", *pResult);
	return 0;
}
