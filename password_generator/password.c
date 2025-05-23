#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

char* Password_generator(int length) {
    const char *digits = "0123456789";
    const char *lowers = "abcdefghijklmnopqrstuvwxyz";
    const char *uppers = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char *symbols = "!@#$%^&*()_+";

    int digits_l  = strlen(digits);
    int lowers_l  = strlen(lowers);
    int uppers_l  = strlen(uppers);
    int symbols_l = strlen(symbols);

    char *password = malloc(length + 1);
    if (!password) {
        return NULL; // Memory allocation failed
    }

    srand(time(NULL) * getpid());

    for (int i = 0; i < length; i++) {
        
		int char_type = rand() % 4;
        
		if (char_type == 0)
            password[i] = digits[rand() % digits_l];
        else if (char_type == 1)
            password[i] = lowers[rand() % lowers_l];
        else if (char_type == 2)
            password[i] = uppers[rand() % uppers_l];
        else
            password[i] = symbols[rand() % symbols_l];
    }

    password[length] = '\0';
    return password; // Return the generated password
}
