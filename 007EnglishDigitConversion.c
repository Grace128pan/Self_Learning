/*
chapter5 page124 exercise6.
Write a program that takes an integer keyed in from the terminal
and extracts and displays each digit of the integer in English.
*/
/*
#include <stdio.h>

int main()
{
    int number, digit;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The number in English is: ");

    do
    {
        digit = number % 10;
        number /= 10;
        switch (digit)
        {
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
    } while (number != 0);

    printf("\n");
    
    return 0;
}
This way will give us the reversed way of the number in English
*/
#include <stdio.h>

int main() 
{
    int number, digit, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The number in English is: ");

    // Reverse the number
    while (number != 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit; // Build the reversed number
        number /= 10;
    }  

    // Print the reversed number in English
    do {
        digit = reversed % 10;
        reversed /= 10;       //This is where the reversed number is reversed back to original and transered into Eglish
        switch (digit) {
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
    } while (reversed != 0);

    printf("\n");

    return 0;
}
/*
There is an array way to deal with this problem, and will dig into this process in the future.
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


*/
