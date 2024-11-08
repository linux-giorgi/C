#include <stdio.h>
#include <stdbool.h>

#define fahrenheit_to_celsius(fahrenheit) ((fahrenheit - 32) * 5/9)	
#define celisus_to_fahrenheit(celsius) (celsius * 9 / 5 + 32)	

short scanf_result;
int value_for_define;

int main()
{
	while (true){
		// start label for goto function
		start:

		// menu and enter sector
		printf("[1] fahrenheit_to_celsius\n[2] celisus_to_fahrenheit\n[0] exit\nenter:");

		// input data
		scanf("%hd",&scanf_result);

		if (scanf_result==0)
			break;
				
		// testing data 
		if (scanf_result != 1 && 2 && 3){

			// if data != 1 or 2 or 3 goto start
			puts("try again");
			goto start;
			
		// else if data is true 
		}else if (scanf_result == 1 || 2 || 3){
		
			// scaning value of data
			switch (scanf_result){
					case 1:
						scanf("%d",&value_for_define);
						break;
					case 2:
						scanf("%d",&value_for_define);
						break; 
				
			}// switch 
		} // else if
	 }// while 
	return 0;
}
