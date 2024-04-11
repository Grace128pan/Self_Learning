/*
Modify Program 7.14 so that the user can convert any number of integers.
Make provision for the program to terminate when a zero is typed in as the
value of the number to be converted.
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

    while (1) {
        printf("Enter a positive integer (enter 0 to exit): ");
        scanf("%d", &number);

        if (number == 0) {
            break; // Exit the loop when 0 is entered
        }

        base = getBase();

        printf("The number %d in base %d is: ", number, base);
        convertToBase(number, base);
        printf("\n");
    }

    return 0;
}

// In this case, negative integers could be handled, but the result will include - sign.