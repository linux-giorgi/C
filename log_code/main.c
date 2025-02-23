#include <stdio.h>
#include <stdlib.h>


void _log(int8_t int_status,char *info){
	
	// opening file
	FILE *log_file = fopen("log.txt", "a");

	// if not file create it
	if (log_file == NULL){
		system("> log.txt");
	}
	
	char *status;
	// input status as number
	switch (int_status){
		
		case 0:
			status = "INFO";			
			break;
		case 1:
			status = "WARNING";
			break;
		case 2:
			status = "ERROR";
			break;
		default:
			status = "UNKNOWN";
			break;
	}

	// input log with DATE, TIME status[ERROR, WARNING, INFO] and INFO
	fprintf(log_file,"[%s %s] [%s] %s\n", __DATE__, __TIME__, status, info);
	
	// close file 
	fclose(log_file);
}

int main(){
	
	// program start log
	_log(0,"start");


	// low mem warning
	_log(1,"low memory");

	// error 
	_log(2,"error");
	
	// program end log
	_log(0,"end");
	return 0;
}
