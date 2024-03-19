#include <stdio.h>

int main() {
    int number, digit;
    int digits[10]; // Array to store digits
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The number in English is: ");

    // Extract digits and store them in an array
    do {
        digit = number % 10;
        digits[count++] = digit;
        number /= 10;
    } while (number != 0);

    // Print digits in reverse order
    for (int i = count - 1; i >= 0; i--) {
        switch (digits[i]) {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
        }
    }

    printf("\n");

    return 0;
}
