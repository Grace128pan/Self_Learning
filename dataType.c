#include <stdio.h>

// Define the Date data type
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Function to print a date
void printDate(Date d) {
    printf("%02d/%02d/%04d\n", d.day, d.month, d.year);
}

// Function to compare two dates
int compareDates(Date d1, Date d2) {
    if (d1.year != d2.year)
        return d1.year - d2.year;
    if (d1.month != d2.month)
        return d1.month - d2.month;
    return d1.day - d2.day;
}

// Function to add days to a date
void addDaysToDate(Date *d, int days) {
    // Implement the logic to add days to the date here
    // For simplicity, this function doesn't handle edge cases like leap years
    d->day += days;
}

int main() {
    // Declare and initialize a date
    Date today = {18, 4, 2024};

    // Print the current date
    printf("Today's date: ");
    printDate(today);

    // Declare another date
    Date anotherDate = {20, 4, 2024};

    // Compare the two dates
    int comparison = compareDates(today, anotherDate);
    if (comparison < 0)
        printf("Today's date is before anotherDate.\n");
    else if (comparison > 0)
        printf("Today's date is after anotherDate.\n");
    else
        printf("Today's date is the same as anotherDate.\n");

    // Add 5 days to today's date
    addDaysToDate(&today, 5);
    printf("Today's date after adding 5 days: ");
    printDate(today);

    return 0;
}
