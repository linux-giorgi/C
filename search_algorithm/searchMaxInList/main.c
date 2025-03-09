#include <stdio.h>

int FindMaxInt(int[], int*);
int FindMaxChar(char[],int*);

int main(){
 	// int list	
	int IntList[] = {62,13,31,612,35,2135,12,632,36,5637};
	
	// char list
	char CharList[] = {'x', 'y', 'f', 'a', 't', 'z'};
 
	// count int list size	
	int IntSize = sizeof(IntList) / sizeof(IntList[0]);
	
	// count char list size
	int CharSize = sizeof(CharList) / sizeof(CharList[0]);
	
	// pointer to int list size value 
	int *pIntSize = &IntSize;

	// pointer to char list size value
	int *pCharSize = &CharSize;

	// run int function
	int IntResult = FindMaxInt(IntList, pIntSize);

	// run char function 
	char CharResult = FindMaxChar(CharList, pCharSize);
	
	// result int pointer
	int *pIntResult = &IntResult;

	// char result pointer 
	char *pCharResult = &CharResult;

	// output result	
	printf("MaxIntVal: %d\nMaxCharVal: %c\n", *pIntResult, *pCharResult);	
	
	return 0;
}

int FindMaxInt(int arr[], int *size){
	int maxVal = arr[0]; // to store max value
		
	for (int i = 1; i < *size; i++){
		if (maxVal < arr[i]){
			maxVal = arr[i];	
		}	
	}
	return maxVal;
}

int FindMaxChar(char arr[], int *size){
	int maxVal = arr[0]; // to store max value
		
	for (int i = 1; i < *size; i++){
		if (maxVal < arr[i]){
			maxVal = arr[i];	
		}	
	}
	return maxVal;
}
