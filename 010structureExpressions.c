/*
Using structures in expressions
century = today.year / 100 + 1;
calculating today might be:
tomorrow.month = today.month;
tomorrow.day = today.day + 1;
tomorrow.year = today.year;
1. one problem to solve: today is the end of a month
int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
for each month, it contains daysPerMOnt[month - 1] days
*/

//program 8.2 ask the user to enter today's date, calculates tomorrow's date and display the results

#include <stdio.h>

int main(void) {
    struct date {
        int month;
        int day;
        int year;
    };
    struct date today, tomorrow;

    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("Enter today's date(mm dd yyyy): ");
    scanf("%i%i%i", &today.month, &today.day, &today.year);

    if (today.day != daysPerMonth[today.month -1]) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    } else if (today.month == 12) {  //end of year
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    } else {          //end of month
        tomorrow.day = 1;  
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    printf("Tomorrow's date is %i/%i/%.2i\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);
    return 0;
}

//the leap year is not considered in this matter