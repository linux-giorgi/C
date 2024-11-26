#include <stdio.h>
#include <stdbool.h>

// Celsius to {some} defines                // formulas
#define Celisus_to_Fahrenheit(Celsius)      ((Celsius * 1.8) + 32)
#define Celisus_to_Kelvin(Celsius)          (Celsius + 273.15)
#define Celisus_to_Rankine(Celsius)         ((Celsius * 1.8) + 491.67)
#define Celisus_to_Newton(Celsius)          (Celsius * 3.03030303)
#define Celisus_to_Romer(Celsius)           ((Celsius / 1.9047619) + 7.5 )
#define Celisus_to_Reaumur(Celsius)         (Celsius / 1.25)
 
// Fahrenheit to {some} defines			    // formulas
#define Fahrenheit_to_Celsius(Fahrenheit)   ((Fahrenheit - 32) / 1.8)	
#define Fahrenheit_to_Kelvin(Fahrenheit)    (((Fahrenheit - 32) / 1.8) + 273.15)
#define Fahrenheit_to_Rankine(Fahrenheit)   (Fahrenheit + 459.67)
#define Fahrenheit_to_Newton(Fahrenheit)    ((Fahrenheit - 32) / 5.45454555)
#define Fahrenheit_to_Romer(Fahrenheit)     (((Fahrenheit - 32) / 3.42857139) + 7.5)
#define Fahrenheit_to_Reaumur(Fahrenheit)   ((Fahrenheit - 32) / 2.25000002)

// Kelvin to {some} defines					// formulas
#define Kelvin_to_Celsius(Kelvin)           (Kelvin - 273.15)	
#define Kelvin_to_Fahrenheit(Kelvin)        (((Kelvin - 273.15) * 1.8) + 32)
#define Kelvin_to_Rankine(Kelvin)           (((Kelvin - 273.15) * 1.8) + 491.67)
#define Kelvin_to_Newton(Kelvin)            ((Kelvin - 273.15) / 3.03030303)
#define Kelvin_to_Romer(Kelvin)             (((Kelvin - 273.15) / 1.9047619) + 7.5)
#define Kelvin_to_Reaumur(Kelvin)           ((Kelvin - 273.15) / 1.25)

// Newton to {some} defines                 // formulas
#define Newton_to_Celsius(Newton)           (Newton * 3.03030303)	
#define Newton_to_Fahrenheit(Newton)        ((Newton * 5.45454545) + 32)
#define Newton_to_Rankine(Newton)    	    ((Newton * 5.45454545) + 491.67)
#define Newton_to_Kelvin(Newton)     	    ((Newton * 3.03030303) + 273.15)
#define Newton_to_Romer(Newton)      	    ((Newton * 1.59090909) + 7.5)
#define Newton_to_Reaumur(Newton)    	    (Newton * 2.42424242)

// Romer to {some} defines                  // formulas
#define Romer_to_Celsius(Romer)             ((Romer - 7.5) * 1.9047619)	
#define Romer_to_Fahrenheit(Romer)          (((Romer - 7.5) * 3.42857143) + 32)
#define Romer_to_Rankine(Romer)             (((Romer - 7.5) * 3.42857143) + 491.67)
#define Romer_to_Kelvin(Romer)              (((Romer - 7.5) * 1.9047619) + 273.15)
#define Romer_to_Newton(Romer)              ((Romer - 7.5) / 1.59090909)
#define Romer_to_Reaumur(Romer)             ((Romer - 7.5) * 1.52380952)

// Reaumur to {some} defines                // formulas
#define Reaumur_to_Celsius(Reaumur)         (Reaumur * 1.25)	
#define Reaumur_to_Fahrenheit(Reaumur)      ((Reaumur * 2.25) + 32)
#define Reaumur_to_Rankine(Reaumur)         ((Reaumur * 2.25) + 491.67)
#define Reaumur_to_Kelvin(Reaumur)          ((Reaumur * 1.25) + 273.15)
#define Reaumur_to_Newton(Reaumur)          (Reaumur / 2.42424242)
#define Reaumur_to_Romer(Reaumur)           ((Reaumur / 1.52380952) + 7.5)

void Display_menu(void);
void Celsius_menu(void);
void Fahrenheit_menu(void);
void Kelvin_menu(void);
void Newton_menu(void);
void Romer_menu(void);
void Reaumur_menu(void);

// variables
short scanf_result_one;
short scanf_result_two;
short scanf_result_three;
long int result_for_convert;
double macro_result;

int main()
{
    while (1) {
        Display_menu();

        // Get user input
        if (scanf("%hd", &scanf_result_one) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear the input buffer
            continue;
        }


        // Handle menu choices
        switch (scanf_result_one) {
            case 1:

            	Celsius_menu();

            	// Get user input
        		if (scanf("%hd", &scanf_result_two) != 1) 
            	printf("Invalid input. Please enter a number.\n");
        		
        		switch (scanf_result_two){

        			case 1:
        				scanf("%hd",&scanf_result_three);

        				switch (scanf_result_three){
        					case 1:
        						macro_result = Celisus_to_Fahrenheit(10);
        						printf("result: %f\n", macro_result);

        						break;
        					
        					case 2:
        						break;
        					case 3:
        						break;
        					case 4:
        						break;
        					case 5:
        						break;
        					case 6:
        						break;
        				}
        				break;

        			case 2:
        				break;
        			case 3:
        				break;
        			case 4:
        				break;
        			case 5:
        				break;
        			case 6:
        				break;
        			case 0:
        				break;
        		}

                break;
            case 2:
            	Fahrenheit_menu();
                break;
            case 3:
            	Kelvin_menu();
                break;
            case 4:
            	Newton_menu();
                break;
            case 5:
            	Romer_menu();
                break;
            case 6:
            	Reaumur_menu();
                break;
            case 0:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please select a valid option (0-6).\n");
                break;
        }
    }

	return 0;
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
	printf("enter: ");
}
void Celsius_menu(void) {
 	printf("1. Celisus_to_Fahrenheit  \n");
 	printf("2. Celisus_to_Kelvin      \n");
 	printf("3. Celisus_to_Rankine     \n");
 	printf("4. Celisus_to_Newton      \n");
 	printf("5. Celisus_to_Romer       \n");
 	printf("6. Celisus_to_Reaumur     \n");
	printf("enter: ");
}
void Fahrenheit_menu(void) {
 	printf("1. Fahrenheit_to_Celsius \n");
 	printf("2. Fahrenheit_to_Kelvin  \n");
 	printf("3. Fahrenheit_to_Rankine \n");
 	printf("4. Fahrenheit_to_Newton  \n");
 	printf("5. Fahrenheit_to_Romer   \n");
 	printf("6. Fahrenheit_to_Reaumur \n");
	printf("enter: ");
}
void Kelvin_menu(void) {
 	printf("1. Kelvin_to_Celsius    \n");
 	printf("2. Kelvin_to_Fahrenheit \n");
 	printf("3. Kelvin_to_Rankine    \n");
 	printf("4. Kelvin_to_Newton     \n");
 	printf("5. Kelvin_to_Romer      \n");
 	printf("6. Kelvin_to_Reaumur    \n");
	printf("enter: ");
}
void Newton_menu(void) {
 	printf("1. Newton_to_Celsius    \n");
 	printf("2. Newton_to_Fahrenheit \n");
 	printf("3. Newton_to_Rankine    \n");
 	printf("4. Newton_to_Kelvin     \n");
 	printf("5. Newton_to_Romer      \n");
 	printf("6. Newton_to_Reaumur    \n");
	printf("enter: ");
}
void Romer_menu(void) {
 	printf("1. Romer_to_Celsius   \n");
 	printf("2. Romer_to_Fahrenheit\n");
 	printf("3. Romer_to_Rankine   \n");
 	printf("4. Romer_to_Kelvin    \n");
 	printf("5. Romer_to_Newton    \n");
 	printf("6. Romer_to_Reaumur   \n");
	printf("enter: ");
}
void Reaumur_menu(void) {
 	printf("1. Reaumur_to_Celsius   \n");
 	printf("2. Reaumur_to_Fahrenheit\n");
 	printf("3. Reaumur_to_Rankine   \n");
 	printf("4. Reaumur_to_Kelvin    \n");
 	printf("5. Reaumur_to_Newton    \n");
 	printf("6. Reaumur_to_Romer     \n");
	printf("enter: ");
}
