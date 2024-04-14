/* page234/1270
exercise 8.5  Write a function called clockKeeper() that takes as its argument a
dateAndTime structure as defined in this chapter. The function should
call the timeUpdate() function, and if the time reaches midnight, the
function should call the dateUpdate function to switch over to the next
day. Have the function return the updated dateAndTime structure
*/

#include <stdio.h>

struct Date {
    int year;
    int month;
    int day;
};

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct DateAndTime {
    struct Date date;
    struct Time time;
};

void timeUpdate(struct Time *time) {
    time->seconds++;

    if (time->seconds == 60) {
        time->seconds = 0;
        time->minutes++;

        if (time->minutes == 60) {
            time->minutes = 0;
            time->hours++;

            if (time->hours == 24) {
                time->hours = 0;
            }
        }
    }
}

void dateUpdate(struct Date *date) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (date->day == days_in_month[date->month - 1]) {
        date->day = 1;
        date->month++;

        if (date->month == 13) {
            date->month = 1;
            date->year++;
        }
    } else {
        date->day++;
    }
}

struct DateAndTime clockKeeper(struct DateAndTime dateTime) {
    timeUpdate(&dateTime.time);

    if (dateTime.time.hours == 0 && dateTime.time.minutes == 0 && dateTime.time.seconds == 0) {
        dateUpdate(&dateTime.date);
    }

    return dateTime;
}

int main() {
    struct DateAndTime currentDateTime = {{2024, 4, 14}, {22, 52, 52}};

    printf("Current Date and Time: %d-%02d-%02d %02d:%02d:%02d\n", currentDateTime.date.year, currentDateTime.date.month, currentDateTime.date.day, currentDateTime.time.hours, currentDateTime.time.minutes, currentDateTime.time.seconds);

    struct DateAndTime updatedDateTime = clockKeeper(currentDateTime);

    printf("Updated Date and Time: %d-%02d-%02d %02d:%02d:%02d\n", updatedDateTime.date.year, updatedDateTime.date.month, updatedDateTime.date.day, updatedDateTime.time.hours, updatedDateTime.time.minutes, updatedDateTime.time.seconds);

    return 0;
}

//this is a way of using pointers to update the time and date