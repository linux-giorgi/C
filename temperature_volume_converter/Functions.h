#include<stdio.h>

void ListPrintFunction(char input[][50], int rows) {
    for (int i = 0; i < rows; i++) {
        printf("%s\n", input[i]); 
    }
} 

void Display_menu(void) {
	printf("\n=======| Temperature_volume_conversion_CLI_program |========\n"
		  "1. Celsius to something else \n"
		  "2. Fahrenheit to something else \n"
		  "3. Kelvin to something else \n"
		  "4. Newton to something else \n"
		  "5. Romer to something else \n"
		  "6. Reaumur to something else \n"
		  "0. exit \n");
}
