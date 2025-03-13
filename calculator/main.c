#include <stdio.h>

// heap variables struct
struct Heap {
	int x,y;
	char z;
	float result;
}; 

// math pointer functions struct
struct calc {
	int (*add)(int, int);
	int (*sub)(int, int);
	int (*mul)(int, int);
	float(*div)(int, int);
};

// math function headers
int add(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);

// input function headers
int input_int_data(void);
char input_char_data(void);

//	choose operator 
float choose_operator_and_return(char,int,int);

// result output function header
void output_result_data(float);

int main(){

	// local heap variables	
	struct Heap local;

	// input first int value
	local.x = input_int_data();

	// input second int value
	local.y = input_int_data();
	
	// input char operator
	local.z = input_char_data();

	// save counted result	
	local.result = choose_operator_and_return(local.z, local.x, local.y);
	
	// output resulted data	
	output_result_data(local.result);		
	
	// EXIT_SUCCESS
	return 0;
}

// function to output returned data
inline void output_result_data(float temp){
	printf("result is: %f\n", temp);
}

// function to choose math operator 
float  choose_operator_and_return(char temp, int x, int y){

	// structure of pointer functions 
	struct calc Calc;	

	// attach functions to struct
	Calc.add = add;	
	Calc.sub = sub;	
	Calc.mul = mul;	
	Calc.div = div;	

	// find math operator	
	switch (temp){
		case '+':
			return Calc.add(x, y);
			break;
		case '-':
			return Calc.sub(x, y);
			break;
		case '*':
			return Calc.mul(x, y);
			break;
		case '/':
			return Calc.div(x, y);
			break;
		default:
			printf("Try again\n");
	
	}
}

// function for input int data
int input_int_data(){

	// temp variable	
	static int temp;
	
	// read inputed data
	printf("Enter: ");
	scanf("%d", &temp);

	// return temp value
	return temp;
}


// function to import char data 
char input_char_data(){
	
	// temp variable	
	static char temp;

	// read inputed data
	printf("Enter (+-*/): ");
	scanf("%s", &temp);

	// return temp value 
	return temp;
}

// add two variables 
int add(int a, int b) {
	return a + b;
}

// sub two variables
int sub(int a, int b) {
	return a - b;
}

// mul two variables
int mul(int a, int b) {
	return a * b;
}

// div two variables and check "zero devision error"
float div(int a, int b) {
	
	// check if b == zero
	if (b == 0) {
		printf("ERROR: Division by zero\n");	
		return 0;
	}
	return a / b;	
}
