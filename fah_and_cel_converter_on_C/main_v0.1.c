#include <stdio.h>
#include <stdbool.h>

// create defines 
#define fahrenheit_to_celsius(fahrenheit) ((fahrenheit - 32) * 5/9)	
#define celisus_to_fahrenheit(celsius) (celsius * 9 / 5 + 32)	

// variables
short scanf_result_one;
int value_for_define;
double scanf_result_two;

int main()
{
	while (true){
	
		// start label for goto function
		start:

		// menu and enter sector
		printf("[1] fahrenheit_to_celsius\n[2] celisus_to_fahrenheit\n[0] exit\nenter:");

		// input data
		scanf("%hd", &scanf_result_one);

		// first scan level 
		if (scanf_result_one == 0){
		
			break;
			
		// scan level two 		
		} else if (scanf_result_one == 1){

	        // input data as fahrenheit	
	        printf("enter fahrenheit: ");
			scanf("%d", &value_for_define);

			// convert fahrenheit_to_celsius
			scanf_result_two = fahrenheit_to_celsius(value_for_define);	

			// output celisus value
			printf("%lf\n", scanf_result_two);	

		//scan level three		
		}else if (scanf_result_one == 2){

			// input data as celsius
			printf("enter celsius: ");
			scanf("%d", &value_for_define);

			// convert celisus_to_fahrenheit
			scanf_result_two = celisus_to_fahrenheit(value_for_define);	

			// output celisus value
			printf("%lf\n", scanf_result_two);
				
		} else {
			// go to start label
			printf("try again!\n");
			goto start;
		}
		
	 } 

	return 0;
}
