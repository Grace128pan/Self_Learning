#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>   //allows us to use isalpha, isdigit, isalnum, etc.

bool checkPassword(const char *password);

int main() {
    char password[100]; // Assuming maximum password length is 100 characters

    // Prompt user for password
    printf("Enter your password: ");
    scanf("%s", password);

    // Check password validity
    if (checkPassword(password)) {
        printf("Password is valid.\n");
    } else {
        printf("Password is invalid.\n");
    }

    return 0;
}

bool checkPassword(const char *password) {
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSymbol = false;

    // Loop through each character of the password
    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i])) {
            hasUpper = true;
        } else if (islower(password[i])) {
            hasLower = true;
        } else if (isdigit(password[i])) {
            hasDigit = true;
        } else if (!isalnum(password[i])) {
            hasSymbol = true;
        }
    }

    // Check if all required conditions are met
    return hasUpper && hasLower && hasDigit && hasSymbol;
}
