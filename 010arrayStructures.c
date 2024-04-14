/*
1. we can define an array of structures
struct time experiments[10]; // array of 10 structures, each represents a time
struct date birthday[15]; // array of 15 structures, each represents a date
birthdays[1].month = 9;
birthdays[1].day = 25;
birthdays[1].year = 2015;
2. struct time experiments[4];
checkTime(experiments[4]);
void checkTime(struct time t0) {
    ...
}
3. struct time runTime [5] {{12, 0, 0}, {12, 30, 0}, {13, 15, 0}};
4. we can also do this:
struct time runTime [5] = {[2] = {12, 0, 0}}
static struct time runTime[5] = {[1].hour = 12, [1].minutes = 30}
*/

//program 8.6 illustrating arrays of structures

#include <stdio.h>

struct time {
    int hour;
    int minutes;
    int seconds;
};

int main(void) {
    struct time timeUpdate(struct time now);
    struct time testTimes[5] = {
        {11, 59, 59}, {12, 0, 0}, {1, 29, 59},
        {23, 59, 59}, {19, 12, 27}
    };
    int i;

    for (i = 0; i < 5; i ++) {
        printf("Time is %.2i:%.2i:%.2i", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
        testTimes[i] = timeUpdate(testTimes[i]);
        printf("...one second later it's %.2i:%.2i:%.2i\n", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
    }
    return 0;
}

struct time timeUpdate(struct time now) {
    now.seconds++;

    if (now.seconds == 60) {
        now.seconds = 0;
        now.minutes++;
        if (now.minutes == 60) {
            now.minutes = 0;
            now.hour++;
            if (now.hour == 24) {
                now.hour = 0;
            }
        }
    }
    return now;
}

//This explains arrays of structures, interesting