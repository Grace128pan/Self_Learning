/*
Modify Program 7.14 so that the user is asked again to type in the value
of the base if an invalid base is entered. The modified program should
continue to ask for the value of the base until a valid response is given.
*/

#include <stdio.h>

int getBase() {
    int base;
    printf("Enter the value of the base (2-10): ");
    scanf("%d", &base);

    while (base < 2 || base > 10) {
        printf("Invalid base. Please enter a value between 2 and 10: ");
        scanf("%d", &base);
    }

    return base;
}

void convertToBase(int number, int base) {
    if (number == 0) {
        return;
    } else {
        convertToBase(number / base, base);
        printf("%d", number % base);
    }
}

int main(void) {
    int number, base;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    base = getBase();

    printf("The number %d in base %d is: ", number, base);
    convertToBase(number, base);
    printf("\n");

    return 0;
}