#include <stdio.h>

int linearSearch(int list[], int size, int target){

	for (int i = 0; i < size; i++){
		if (list[i] == target){
			return i;
		}
	}
	return -1;
}

int main(){
	int list[] = {23,42,53,463,23,74,2354,785,233,865,47,34};
	int size = sizeof(list) / sizeof(list[0]);
	int target = 47;
	
	int result = linearSearch(list, size, target);
	
	if (result != -1){
		printf("target %d found at index %d.\n", target, result);
	} else {
		printf("target %d not found.\n", target);
	}

	return 0;
}
