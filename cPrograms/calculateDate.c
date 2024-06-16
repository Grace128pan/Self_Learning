#include <stdio.h>

// Structure to represent a date
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        } else
            return 1;
    } else
        return 0;
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (isLeapYear(year))
                return 29;
            else
                return 28;
        default:
            return 0;
    }
}

// Function to add days to a date
Date addDays(Date date, int days) {
    date.day += days;

    while (date.day > getDaysInMonth(date.month, date.year)) {
        date.day -= getDaysInMonth(date.month, date.year);
        date.month++;

        if (date.month > 12) {
            date.month = 1;
            date.year++;
        }
    }

    return date;
}

// Function to print a date
void printDate(Date date) {
    printf("%02d/%02d/%04d\n", date.day, date.month, date.year);
}

int main() {
    Date today;
    printf("Enter today's date (dd mm yyyy): ");
    scanf("%d %d %d", &today.day, &today.month, &today.year);

    Date futureDate = addDays(today, 10);

    printf("Date after 10 days: ");
    printDate(futureDate);

    return 0;
}
