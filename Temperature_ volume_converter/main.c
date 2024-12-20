#include "menu_data.h"
#include "Functions.h"

#include "Defines/cel_to.c"
#include "Defines/fah_to.c"
#include "Defines/kel_to.c"
#include "Defines/new_to.c"
#include "Defines/rea_to.c"
#include "Defines/rom_to.c"
 


// variables
short scanf_result_one;
short scanf_result_two;
short scanf_result_three;
long int result_for_convert;
double macro_result;

int main()
{
    while (1) {

        // main menu 
        Display_menu();
        printf("enter: ");

        // Get user input
        if (scanf("%hd", &scanf_result_one) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (scanf_result_one) {
            case 1:

            	ListPrintFunction(Celsius_menu, 6);
                printf("enter: ");
            	// Get user input
        		if (scanf("%hd", &scanf_result_two) != 1) 
            	printf("Invalid input. Please enter a number.\n");
        		
        		switch (scanf_result_two){
                	case 1:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Celisus_to_Fahrenheit(result_for_convert);           
                        printf("result: %f\n", macro_result);
        				break;

        			case 2:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Celisus_to_Kelvin(result_for_convert);           
                        printf("result: %f\n", macro_result);
        				break;

        			case 3:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Celisus_to_Rankine(result_for_convert);           
                        printf("result: %f\n", macro_result);
        				break;

        			case 4:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Celisus_to_Newton(result_for_convert);           
                        printf("result: %f\n", macro_result);
        				break;

        			case 5:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Celisus_to_Romer(result_for_convert);           
                        printf("result: %f\n", macro_result);
        				break;

        			case 6:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Celisus_to_Reaumur(result_for_convert);           
                        printf("result: %f\n", macro_result);
        				break;

        			case 0:
        				break;
        		}
                break;
            case 2:
            	ListPrintFunction(Fahrenheit_menu, 6);
                printf("enter: ");

                // Get user input
                if (scanf("%hd", &scanf_result_two) != 1) 
                printf("Invalid input. Please enter a number.\n");
                

                switch (scanf_result_two){
                    case 1:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Fahrenheit_to_Celsius(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 2:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Fahrenheit_to_Kelvin(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 3:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Fahrenheit_to_Rankine(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 4:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Fahrenheit_to_Newton(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 5:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Fahrenheit_to_Romer(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 6:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Fahrenheit_to_Reaumur(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 0:
                        break;
                }
                break;
            case 3:
            	ListPrintFunction(Kelvin_menu, 6);
                printf("enter: ");
                // Get user input
                if (scanf("%hd", &scanf_result_two) != 1) 
                printf("Invalid input. Please enter a number.\n");
                


                switch (scanf_result_two){
                    case 1:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Kelvin_to_Celsius(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 2:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Kelvin_to_Fahrenheit(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 3:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Kelvin_to_Rankine(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 4:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Kelvin_to_Newton(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 5:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Kelvin_to_Romer(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 6:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Kelvin_to_Reaumur(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 0:
                        break;
                }
                break;
            case 4:
            	ListPrintFunction(Newton_menu, 6);
                printf("enter: ");
                // Get user input
                if (scanf("%hd", &scanf_result_two) != 1) 
                printf("Invalid input. Please enter a number.\n");
                
                switch (scanf_result_two){
                    case 1:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Newton_to_Celsius(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 2:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Newton_to_Fahrenheit(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 3:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Newton_to_Rankine(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 4:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Newton_to_Kelvin(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 5:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Newton_to_Romer(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 6:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Newton_to_Reaumur(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 0:
                        break;
                }
                break;
            case 5:
            	ListPrintFunction(Romer_menu, 6);
                printf("enter: ");
                // Get user input
                if (scanf("%hd", &scanf_result_two) != 1) 
                printf("Invalid input. Please enter a number.\n");
            
                switch (scanf_result_two){
                    case 1:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Romer_to_Celsius(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 2:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Romer_to_Fahrenheit(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 3:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Romer_to_Rankine(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 4:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Romer_to_Kelvin(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 5:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Romer_to_Newton(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 6:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Romer_to_Reaumur(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 0:
                        break;
                }
                break;
            case 6:
            	ListPrintFunction(Reaumur_menu, 6);
                printf("enter: ");
                // Get user input
                if (scanf("%hd", &scanf_result_two) != 1) 
                printf("Invalid input. Please enter a number.\n");
                switch (scanf_result_two){
                    case 1:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Reaumur_to_Celsius(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 2:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Reaumur_to_Fahrenheit(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 3:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Reaumur_to_Rankine(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 4:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Reaumur_to_Kelvin(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 5:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Reaumur_to_Newton(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 6:
                        printf("enter: ");
                        scanf("%ld",&result_for_convert);
                        macro_result = Reaumur_to_Romer(result_for_convert);           
                        printf("result: %f\n", macro_result);
                        break;

                    case 0:
                        break;
                }
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



