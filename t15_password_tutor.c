#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool valid(const char *password);

int main(void) {
    char password[100]; // Assuming maximum password length is 100 characters

    printf("Enter your password: ");
    scanf("%s", password);

    if (valid(password)) {
        printf("Your password is valid!\n");
    } else {
        printf("Your password needs at least one uppercase letter, lowercase letter, number, and symbol\n");
    }

    return 0;
}

bool valid(const char *password) {
    int count = strlen(password);
    bool lower = false, upper = false, number = false, symbol = false;

    for (int i = 0; i < count; i++) {
        if (isalpha(password[i])) {
            if (isupper(password[i])) {
                upper = true;
            } else {
                lower = true;
            }
        } else if (isdigit(password[i])) {
            number = true;
        } else {
            symbol = true;
        }
    }

    return lower && upper && number && symbol;
}

