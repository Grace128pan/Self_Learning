//page 212 
/*
program 8.4 revise  the program to determine tomorrow's date version 2
*/

#include <stdio.h>
#include <stdbool.h>

struct date {
    int month;
    int day;
    int year;
};

//function to calculate tomorrow's date
struct date dateUpdate(struct date today) {
    struct date tomorrow;
    int numberOfDays(struct date d);

    if (today.day != numberOfDays(today)) { // calculate the day of the month
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    } else if (today.month == 12) { //end of year
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;

    } else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    return tomorrow;
}

//function to determine if it's a leap year
bool isLeapYear(struct date d) {
    bool leapYearFlag;

    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
        leapYearFlag = true;  
    } else {
        leapYearFlag = false;
    }
    return leapYearFlag;
}

//function to find the number of days in a month
int numberOfDays(struct date d) {
    int days;
    bool isleapYear(struct date d);   //isLeapYear should be declared first before being called
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

    if (isLeapYear(d) == true && d.month == 2) {
        days = 29;
    } else {
        days = daysPerMonth[d.month -1];
    }
    return days;
}


int main (void) {
    struct date dateUpdate(struct date today);
    struct date thisDay, nextDay;

    printf("Enter today's date(mm dd yyyy): ");
    scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

    nextDay = dateUpdate(thisDay);
    printf("Tomorrow's date is %i/%i/%.2i.\n",nextDay.month, nextDay.day, nextDay.year % 100);
    return 0;
}
//The main function calls dateupdate functions, which calls numberOfDays function, which calls isLeapYear function.
//function should be declared before being called.