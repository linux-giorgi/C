#include "log.h"

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
