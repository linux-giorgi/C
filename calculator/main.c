#include <stdio.h>

struct temp {
	int x,y;
	char z;
	float result;
}; 

struct temp local;

int input_int_data(void);
char input_char_data(void);
float search_calculation_and_return(char,int,int);
void output_result_data(float);

int main(){
	local.x = input_int_data();
	local.y = input_int_data();
	local.z = input_char_data();
	
	local.result = search_calculation_and_return(local.z, local.x, local.y);
		
	output_result_data(local.result);		
	return 0;
}

void output_result_data(float temp){
	printf("result is: %f\n", temp);
}

float  search_calculation_and_return(char temp, int x, int y){
	switch (temp){
		case '+':
			return x + y;
			break;
		case '-':
			return x - y;
			break;
		case '*':
			return x * y;
			break;
		case '/':
			return x / y;
			break;
		default:
			printf("Try again\n");
	
	}
}
int input_int_data(){
	static int temp;
	printf("Enter: ");
	scanf("%d", &temp);
	return temp;
}

char input_char_data(){
	static char temp;
	printf("Enter (+-*/): ");
	scanf("%s", &temp);
	return temp;
}

