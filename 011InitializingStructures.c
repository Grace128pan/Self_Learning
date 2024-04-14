/*
1.Initializing structures
struct date today = {7, 2, 2015};
struct time thisTime = {3, 29, 55};
2. static variables are commonly used when you want to maintain state across multiple function calls within the 
samle file or ensure the variable's values are preserved through the program's execution
3. static variables are useful when you want to share data among different functions within the same file
4. struct time time1 = {12, 10 };
in this case, the default initial value for second is not defined
5. we can initialize the member of structure by dot operator
struct time time2= {.hour = 12, .minute = 10 };
struct date today = {.year = 2015 };
6.compound literals
today = (struct date) {9, 25, 2015};
today = (struct date) { .month = 9, .day = 25, .year = 2015};
*/
//compound literals are used to calculate tomorrow's date 

#include <stdio.h>
#include <stdbool.h>

struct date {
    int month;
    int day;
    int year;
};

bool isLeapYear(struct date d) {
    bool leapYearFlag;

    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
        leapYearFlag = true;
    } else {
        leapYearFlag = false;
    }
    return leapYearFlag;
}


int numberOfDays (struct date d) {
    int days;
    bool isLeapYear(struct date d);
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(d) == true && d.month == 2) {
        days = 29;
    } else {
        days = daysPerMonth[d.month -1];
    }
    return days;
}

struct date dateUpdate(struct date today) {
    struct date tomorrow;
    int numberOfDays(struct date d);

    if (today.day != numberOfDays(today)) {
        tomorrow = (struct date) {today.month, today.day + 1, today.year}; //using compund literals
    } else if (today.month == 12) {
        tomorrow = (struct date) {1, 1, today.year + 1};  //end of year
    } else {
        tomorrow = (struct date) {today.month + 1, 1, today.year};
    }
    return tomorrow;
}

int main (void) {
    struct date dateUpdate(struct date today);
    struct date thisDay, nextDay;

    printf("Enter today's date(mm dd yyyy): ");
    scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

    nextDay = dateUpdate(thisDay);
    printf("Tomorrow's date is %i/%i/%.2i.\n", nextDay.month, nextDay.day, nextDay.year % 100);
    return 0;
}