#include<stdio.h>

void ListPrintFunction(char inp[][50], int rows) {
    for (int i = 0; i < rows; i++) {
        printf("%s\n", inp[i]); 
    }
} 

void Display_menu(void) {
	printf("\n=======| Temperature_volume_conversion_CLI_program |========\n");
	printf("1. Celsius to something else \n");
	printf("2. Fahrenheit to something else \n");
	printf("3. Kelvin to something else \n");
	printf("4. Newton to something else \n");
	printf("5. Romer to something else \n");
	printf("6. Reaumur to something else \n");
	printf("0. exit \n");
}
