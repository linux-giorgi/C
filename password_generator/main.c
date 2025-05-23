#include <stdio.h>
#include <stdlib.h>

#include "password.h"

int main(void) {
	int length;
		 
    // data input from user
    printf("Length: ");
    scanf("%d", &length);

	char* password = Password_generator(length);	

	if (password) {
		printf("password: %s\n", password);
		free(password);
	} else {
		printf("Password generation failed\n");
	}

	return 0;
}
