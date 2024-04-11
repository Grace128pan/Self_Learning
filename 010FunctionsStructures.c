/*
Considering leap year to calculate tomorrow's date
we need to develop numberOfDays() function to solve the problem
decision on leap year
1)a year is divisible by 4 is a leap year
2)a year is divisible by 100 is not a leap year, except if it is also divisible by 400
in a leap year, February 29 is the last day of February
*/

//program 8.3 to determine tomorrow's date considering the leap year

#include <stdio.h>
#include <stdbool.h>

struct date {
    int month;
    int day;
    int year;
};

int main(void) {
    struct date today, tomorrow;
    int numberOfDays(struct date d);

    printf("Enter today's date(mm dd yyyy): ");
    scanf("%i%i%i", &today.month, &today.day, &today.year);

    if (today.day != numberOfDays(today)) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    } else if (today.month == 12) {  //end of year
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    } else {    //end of month
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);
    return 0;
}

//function to find the number of days in a month
int numberOfDays(struct date d) 
{
    int days;
    bool isLeapYear(struct date d);
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30,
                                  31, 31, 30, 31, 30, 31};
    
    if (isLeapYear(d) == true && d.month == 2) {
        days = 29;
    } else {
        days = daysPerMonth[d.month - 1];   
    }
    return days;
}

//function to determine if it is a leap year
bool isLeapYear(struct date d) {
    bool leapYearFlag;

    if (d.year % 4 == 0 && d.year % 100 != 0 || d.year % 400 == 0) {
        leapYearFlag = true;
    } else {
        leapYearFlag = false;
    }
    return leapYearFlag;
}

//Considering the leap year to calculate tomorrow's date